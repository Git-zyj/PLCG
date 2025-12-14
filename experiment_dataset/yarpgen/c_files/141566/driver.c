#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)1;
short var_1 = (short)-8023;
long long int var_4 = 8713029265488558186LL;
unsigned long long int var_8 = 4051714298016075727ULL;
unsigned short var_9 = (unsigned short)20595;
unsigned long long int var_10 = 4686726623892280065ULL;
int zero = 0;
unsigned long long int var_11 = 7116266050773344509ULL;
long long int var_12 = -8866347898331509470LL;
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
