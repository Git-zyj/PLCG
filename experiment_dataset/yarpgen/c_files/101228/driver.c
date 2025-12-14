#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8857;
_Bool var_3 = (_Bool)0;
long long int var_4 = -6252146952577870248LL;
unsigned char var_6 = (unsigned char)17;
short var_7 = (short)14831;
int zero = 0;
int var_15 = -1675039174;
short var_16 = (short)18126;
unsigned int var_17 = 449108363U;
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
