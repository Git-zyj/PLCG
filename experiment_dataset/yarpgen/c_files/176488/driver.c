#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4071531975535462696LL;
unsigned int var_4 = 1673052850U;
unsigned short var_6 = (unsigned short)49762;
unsigned int var_8 = 2119631707U;
unsigned long long int var_10 = 18061017951489108222ULL;
unsigned short var_12 = (unsigned short)28626;
int zero = 0;
int var_14 = -1134762865;
signed char var_15 = (signed char)-36;
short var_16 = (short)-32084;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
