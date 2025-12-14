#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14407525198272625000ULL;
unsigned int var_14 = 4146800636U;
short var_16 = (short)28887;
signed char var_17 = (signed char)34;
short var_18 = (short)6091;
int zero = 0;
long long int var_20 = -45175601581640624LL;
unsigned int var_21 = 1351911262U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
