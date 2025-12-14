#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 731086361U;
unsigned int var_1 = 868844611U;
unsigned int var_10 = 3206041244U;
int zero = 0;
unsigned int var_12 = 3063930677U;
unsigned int var_13 = 2133309535U;
unsigned int var_14 = 980078479U;
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
