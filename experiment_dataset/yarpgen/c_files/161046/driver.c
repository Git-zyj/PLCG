#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1807981432U;
unsigned int var_5 = 2693652193U;
unsigned long long int var_6 = 2473286007470332994ULL;
unsigned long long int var_8 = 4892141503599693020ULL;
int zero = 0;
unsigned long long int var_14 = 11256103430040266808ULL;
unsigned int var_15 = 2075046456U;
unsigned int var_16 = 3139916214U;
unsigned int var_17 = 85820075U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
