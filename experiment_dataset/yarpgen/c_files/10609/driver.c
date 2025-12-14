#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10769;
int var_5 = -1675860213;
unsigned char var_6 = (unsigned char)54;
unsigned char var_10 = (unsigned char)162;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)43636;
unsigned int var_13 = 2274320607U;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 3576311715238686419ULL;
int var_16 = -753506216;
short var_17 = (short)16909;
signed char var_18 = (signed char)88;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
