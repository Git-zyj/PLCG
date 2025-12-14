#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)124;
unsigned char var_8 = (unsigned char)50;
unsigned short var_11 = (unsigned short)38334;
int zero = 0;
long long int var_16 = 2383033818585422720LL;
unsigned char var_17 = (unsigned char)87;
short var_18 = (short)19751;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
