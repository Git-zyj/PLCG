#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)27461;
long long int var_6 = -3583620466687602158LL;
unsigned int var_9 = 4170777882U;
unsigned char var_11 = (unsigned char)59;
int var_12 = 2120327795;
short var_14 = (short)-2712;
unsigned long long int var_15 = 17965646145178744743ULL;
int zero = 0;
short var_16 = (short)29206;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
