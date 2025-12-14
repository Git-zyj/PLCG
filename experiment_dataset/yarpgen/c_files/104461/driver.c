#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 7707964398599792841LL;
unsigned long long int var_8 = 16762353159663600203ULL;
unsigned int var_10 = 3348166583U;
int zero = 0;
long long int var_11 = -2082746738486254636LL;
int var_12 = 1247144161;
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
