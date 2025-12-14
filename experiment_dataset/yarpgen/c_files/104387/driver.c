#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1542004895;
unsigned int var_6 = 3703313487U;
int var_7 = -1855830855;
unsigned short var_10 = (unsigned short)28682;
unsigned short var_12 = (unsigned short)12566;
int var_13 = -1001048629;
int var_14 = -12026222;
int zero = 0;
unsigned short var_15 = (unsigned short)29221;
int var_16 = -119788298;
_Bool var_17 = (_Bool)1;
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
