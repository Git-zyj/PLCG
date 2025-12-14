#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)-80;
short var_8 = (short)-22227;
short var_14 = (short)-2046;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)16273;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2258342608U;
int var_22 = 1612392825;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
