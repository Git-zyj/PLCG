#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)16;
unsigned long long int var_6 = 16022611858659461174ULL;
int var_11 = 1697434871;
unsigned short var_14 = (unsigned short)56793;
int zero = 0;
long long int var_15 = 5562941044361417792LL;
unsigned short var_16 = (unsigned short)20318;
short var_17 = (short)5879;
unsigned long long int var_18 = 10602266552741990312ULL;
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
