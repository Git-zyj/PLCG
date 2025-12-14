#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1371976317U;
unsigned int var_4 = 1507740813U;
signed char var_6 = (signed char)-22;
int zero = 0;
unsigned short var_15 = (unsigned short)48271;
short var_16 = (short)-28998;
void init() {
}

void checksum() {
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
