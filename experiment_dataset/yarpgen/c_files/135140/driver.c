#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19962;
long long int var_1 = -7865020806234907099LL;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)1963;
unsigned short var_10 = (unsigned short)42315;
unsigned short var_12 = (unsigned short)24191;
unsigned long long int var_13 = 17583044090663613656ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)7108;
long long int var_16 = -2499800563151541353LL;
unsigned short var_17 = (unsigned short)14300;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
