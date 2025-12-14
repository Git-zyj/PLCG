#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned int var_8 = 2463092842U;
int var_10 = -1456408805;
int var_11 = -2021349419;
signed char var_14 = (signed char)4;
int zero = 0;
signed char var_18 = (signed char)58;
short var_19 = (short)-7974;
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
