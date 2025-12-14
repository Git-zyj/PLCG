#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4992206728601427430ULL;
unsigned long long int var_4 = 6821805005046884831ULL;
int zero = 0;
unsigned long long int var_10 = 9915568110548284217ULL;
long long int var_11 = 2547428854464110579LL;
unsigned long long int var_12 = 8913456263193884595ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
