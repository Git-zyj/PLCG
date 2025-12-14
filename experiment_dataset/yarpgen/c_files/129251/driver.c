#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)134;
_Bool var_2 = (_Bool)1;
int var_4 = 2016938476;
_Bool var_6 = (_Bool)1;
long long int var_8 = -3318623598864112436LL;
unsigned long long int var_10 = 10652595142239240945ULL;
int var_11 = 634987303;
long long int var_14 = -8913407431645710183LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_16 = (short)-8988;
short var_17 = (short)-8455;
long long int var_18 = 2441712271069996034LL;
int var_19 = 1160758243;
int var_20 = -788904942;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
