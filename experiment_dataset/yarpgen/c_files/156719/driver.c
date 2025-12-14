#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)31239;
int var_4 = 1911668136;
unsigned long long int var_13 = 3033310418390922426ULL;
int zero = 0;
unsigned int var_15 = 1322706243U;
short var_16 = (short)-10720;
unsigned int var_17 = 771434877U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
