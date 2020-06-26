#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        write(1, "sleep num\n", 10);
        exit();
    }
    int n = atoi(argv[1]);
    sleep(n);
    exit();
}