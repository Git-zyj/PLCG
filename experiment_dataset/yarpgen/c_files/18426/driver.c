#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1808886791U;
signed char var_2 = (signed char)51;
int var_4 = 1556170073;
long long int var_5 = 7729928186853639418LL;
unsigned int var_8 = 3143986445U;
short var_12 = (short)-13519;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)54025;
unsigned long long int var_15 = 9764972827257209338ULL;
short var_16 = (short)10803;
short var_17 = (short)-21575;
unsigned short var_18 = (unsigned short)5215;
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
