#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 10399784618959750084ULL;
short var_8 = (short)-24030;
signed char var_10 = (signed char)53;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)11276;
unsigned long long int var_15 = 4840663094704693794ULL;
short var_17 = (short)-6860;
int zero = 0;
unsigned short var_18 = (unsigned short)42860;
unsigned int var_19 = 1868952566U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
