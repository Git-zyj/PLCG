#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1761696913873728566LL;
long long int var_8 = 688523725424010038LL;
unsigned long long int var_10 = 9189061342891865261ULL;
unsigned short var_11 = (unsigned short)53850;
short var_12 = (short)-14010;
unsigned short var_14 = (unsigned short)42731;
unsigned char var_15 = (unsigned char)133;
int var_17 = -7534976;
int zero = 0;
unsigned short var_18 = (unsigned short)8848;
unsigned char var_19 = (unsigned char)125;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
