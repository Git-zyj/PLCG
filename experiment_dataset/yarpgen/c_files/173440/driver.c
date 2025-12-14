#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)41;
signed char var_1 = (signed char)4;
unsigned short var_5 = (unsigned short)5575;
unsigned int var_7 = 3944584939U;
unsigned short var_8 = (unsigned short)56886;
unsigned int var_10 = 1974541895U;
signed char var_11 = (signed char)92;
long long int var_12 = 735544351893432660LL;
unsigned char var_13 = (unsigned char)134;
int zero = 0;
unsigned short var_14 = (unsigned short)46747;
unsigned long long int var_15 = 2347181767262478120ULL;
signed char var_16 = (signed char)87;
int var_17 = -143070360;
signed char var_18 = (signed char)-106;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
