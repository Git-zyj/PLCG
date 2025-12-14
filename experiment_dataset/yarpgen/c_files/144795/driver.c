#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1475767885U;
unsigned int var_6 = 3945794720U;
unsigned short var_8 = (unsigned short)60162;
_Bool var_10 = (_Bool)0;
unsigned short var_12 = (unsigned short)39746;
int zero = 0;
unsigned int var_16 = 2449532463U;
long long int var_17 = -3246295901034854925LL;
long long int var_18 = 7735337380646397508LL;
long long int var_19 = -8406434105456907553LL;
int var_20 = -1162620612;
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
