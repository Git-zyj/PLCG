#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)73;
int var_2 = 1659215488;
int var_6 = 929391037;
unsigned char var_10 = (unsigned char)192;
int zero = 0;
unsigned long long int var_11 = 3696153524302481617ULL;
unsigned char var_12 = (unsigned char)221;
short var_13 = (short)-15452;
unsigned long long int var_14 = 16965956748755440242ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
