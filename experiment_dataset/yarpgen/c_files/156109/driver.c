#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7697047986870424650LL;
unsigned long long int var_4 = 7983213945753905536ULL;
unsigned short var_12 = (unsigned short)26753;
unsigned int var_15 = 3015011218U;
int zero = 0;
int var_17 = 485912932;
int var_18 = -1333642686;
long long int var_19 = 5994600864810005463LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
