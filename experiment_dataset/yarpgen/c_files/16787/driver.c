#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 56697866U;
signed char var_4 = (signed char)-115;
unsigned short var_9 = (unsigned short)63568;
int zero = 0;
short var_12 = (short)-22942;
int var_13 = 741272916;
signed char var_14 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
