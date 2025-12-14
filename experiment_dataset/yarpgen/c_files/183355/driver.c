#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)44064;
unsigned int var_5 = 444196117U;
unsigned char var_11 = (unsigned char)127;
unsigned int var_14 = 2124265648U;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)61350;
int zero = 0;
unsigned long long int var_19 = 2754196680725067265ULL;
int var_20 = -1836274172;
void init() {
}

void checksum() {
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
