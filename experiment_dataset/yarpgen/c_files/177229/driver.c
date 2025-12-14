#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11134578572037662200ULL;
unsigned char var_3 = (unsigned char)158;
unsigned char var_5 = (unsigned char)28;
unsigned int var_6 = 2174071786U;
unsigned short var_10 = (unsigned short)1364;
_Bool var_12 = (_Bool)1;
short var_13 = (short)2437;
int zero = 0;
unsigned int var_14 = 3451071992U;
unsigned char var_15 = (unsigned char)22;
int var_16 = 2056804404;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
