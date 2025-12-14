#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1661835494U;
unsigned int var_5 = 2161769837U;
long long int var_8 = -7148679232609505217LL;
unsigned short var_12 = (unsigned short)27695;
unsigned int var_13 = 2751153722U;
long long int var_14 = 1826132615851144188LL;
int zero = 0;
unsigned long long int var_15 = 9542593240559990328ULL;
long long int var_16 = -1739234240626299907LL;
unsigned short var_17 = (unsigned short)62048;
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
