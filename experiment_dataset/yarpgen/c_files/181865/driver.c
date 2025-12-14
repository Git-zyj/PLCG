#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 70605052U;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-7934;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 11690636712925482304ULL;
signed char var_11 = (signed char)102;
int zero = 0;
unsigned short var_14 = (unsigned short)59249;
unsigned int var_15 = 2859146933U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
