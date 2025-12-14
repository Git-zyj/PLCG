#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2231311420821876719ULL;
int var_10 = -2116862075;
long long int var_12 = -8484913418990838949LL;
int zero = 0;
long long int var_14 = 550631726619795342LL;
short var_15 = (short)-1175;
signed char var_16 = (signed char)24;
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
