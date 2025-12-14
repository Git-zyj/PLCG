#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8636;
unsigned int var_2 = 2523834167U;
signed char var_5 = (signed char)87;
long long int var_7 = -4597676283285348649LL;
unsigned int var_8 = 232816962U;
int var_11 = 1882487359;
int zero = 0;
unsigned int var_12 = 3636785053U;
unsigned long long int var_13 = 16008230509573629831ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
