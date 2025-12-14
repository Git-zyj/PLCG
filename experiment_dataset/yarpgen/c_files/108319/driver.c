#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7691057855970213496ULL;
unsigned int var_3 = 4073515949U;
unsigned long long int var_5 = 5628503404587332214ULL;
short var_7 = (short)-16549;
int zero = 0;
short var_11 = (short)19259;
unsigned int var_12 = 1086425595U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
