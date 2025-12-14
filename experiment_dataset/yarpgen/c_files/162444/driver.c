#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9109910711109816264ULL;
unsigned long long int var_1 = 2144884324511336817ULL;
unsigned long long int var_3 = 1543424773751377274ULL;
unsigned long long int var_4 = 8085971519705629819ULL;
unsigned long long int var_8 = 5960156843404416196ULL;
unsigned long long int var_10 = 5657210862182541165ULL;
int zero = 0;
unsigned long long int var_12 = 5023079093798881878ULL;
unsigned long long int var_13 = 5505890471165941455ULL;
unsigned long long int var_14 = 7691173119242581829ULL;
unsigned long long int var_15 = 10537350893859893908ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
