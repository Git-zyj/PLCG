#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)92;
short var_2 = (short)6420;
long long int var_6 = 8597124550611904123LL;
unsigned short var_11 = (unsigned short)35012;
unsigned int var_13 = 1150042933U;
unsigned short var_14 = (unsigned short)5528;
int zero = 0;
unsigned short var_16 = (unsigned short)1869;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
