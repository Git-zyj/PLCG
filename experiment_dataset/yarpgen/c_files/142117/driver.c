#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2340708998U;
unsigned long long int var_2 = 16939568886624574982ULL;
unsigned long long int var_4 = 8562071874076512809ULL;
short var_5 = (short)-23364;
int var_7 = -667190569;
int var_11 = 1124290909;
int zero = 0;
short var_12 = (short)-7973;
unsigned long long int var_13 = 11049964571813974921ULL;
short var_14 = (short)8216;
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
