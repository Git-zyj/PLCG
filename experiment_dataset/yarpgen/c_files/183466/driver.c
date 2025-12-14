#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27230;
unsigned long long int var_4 = 15717908121203783943ULL;
short var_7 = (short)-6275;
unsigned int var_12 = 1835610885U;
int zero = 0;
unsigned int var_13 = 4260686874U;
short var_14 = (short)-21731;
void init() {
}

void checksum() {
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
