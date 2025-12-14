#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)3418;
unsigned short var_4 = (unsigned short)57385;
unsigned short var_6 = (unsigned short)28912;
int var_8 = 1335669908;
short var_9 = (short)12207;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_14 = (short)-29424;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
