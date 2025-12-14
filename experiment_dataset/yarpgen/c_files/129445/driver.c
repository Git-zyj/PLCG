#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-12182;
unsigned long long int var_4 = 12794996192932213896ULL;
signed char var_5 = (signed char)80;
unsigned long long int var_10 = 13514231910958620523ULL;
int zero = 0;
int var_16 = 1420640857;
int var_17 = 13742801;
void init() {
}

void checksum() {
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
