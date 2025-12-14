#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2955646946U;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 6291084719089642539ULL;
short var_10 = (short)-24406;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_12 = (short)-30494;
unsigned int var_13 = 3873689692U;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
