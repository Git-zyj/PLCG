#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5011528501086923383LL;
short var_3 = (short)-19058;
short var_6 = (short)21985;
long long int var_11 = -6462850595180728270LL;
unsigned char var_12 = (unsigned char)179;
long long int var_13 = 5927730553665837095LL;
long long int var_16 = 5373179088697400256LL;
int zero = 0;
long long int var_17 = -4726568207831846817LL;
unsigned short var_18 = (unsigned short)61135;
signed char var_19 = (signed char)-15;
signed char var_20 = (signed char)-53;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
