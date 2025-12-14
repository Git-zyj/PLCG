#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1689154206126271139ULL;
unsigned long long int var_1 = 12040035701995959608ULL;
unsigned long long int var_4 = 8727374597325744667ULL;
unsigned long long int var_6 = 16074049974375218161ULL;
unsigned long long int var_8 = 69331922157059601ULL;
short var_12 = (short)12744;
int zero = 0;
int var_15 = -196675231;
short var_16 = (short)19117;
unsigned short var_17 = (unsigned short)3639;
unsigned int var_18 = 2108191879U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
