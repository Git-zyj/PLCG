#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 2030366974770593370LL;
unsigned long long int var_8 = 2174581745292932983ULL;
unsigned char var_9 = (unsigned char)252;
long long int var_13 = -2311138303057865473LL;
int zero = 0;
unsigned short var_14 = (unsigned short)15269;
unsigned int var_15 = 1917894364U;
void init() {
}

void checksum() {
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
