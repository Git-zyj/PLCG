#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 117798271U;
short var_7 = (short)-30374;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 958489919U;
int zero = 0;
int var_13 = -115868400;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)113;
short var_16 = (short)29342;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
