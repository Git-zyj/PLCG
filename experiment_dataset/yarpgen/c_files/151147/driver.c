#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 570864518030104277ULL;
short var_3 = (short)22768;
signed char var_4 = (signed char)95;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 15807988774584759343ULL;
int zero = 0;
int var_15 = 1392539600;
signed char var_16 = (signed char)10;
unsigned long long int var_17 = 7509209196330705026ULL;
void init() {
}

void checksum() {
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
