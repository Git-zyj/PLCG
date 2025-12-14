#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5316442065259864682LL;
unsigned short var_2 = (unsigned short)15207;
unsigned short var_3 = (unsigned short)13201;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 2834072134U;
unsigned int var_10 = 1606199292U;
int zero = 0;
long long int var_13 = -5951854241739461167LL;
long long int var_14 = 360020750956539999LL;
unsigned short var_15 = (unsigned short)19418;
unsigned long long int var_16 = 15140080497053656200ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
