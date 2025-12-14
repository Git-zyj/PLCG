#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)147;
unsigned int var_11 = 647433335U;
unsigned short var_13 = (unsigned short)52422;
unsigned long long int var_16 = 1636320907995236075ULL;
unsigned long long int var_18 = 13804017875289006742ULL;
int zero = 0;
int var_19 = -87376582;
int var_20 = -328552149;
int var_21 = 1454492455;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
