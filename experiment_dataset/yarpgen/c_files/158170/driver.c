#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1756417505;
int var_3 = 2137603616;
short var_4 = (short)-1805;
unsigned long long int var_8 = 12040404091015229667ULL;
int zero = 0;
int var_12 = 368672459;
unsigned short var_13 = (unsigned short)17527;
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
