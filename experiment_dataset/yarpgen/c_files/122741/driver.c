#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)129;
unsigned short var_3 = (unsigned short)62163;
short var_6 = (short)-11175;
int var_7 = -1465666045;
int var_8 = -91407557;
long long int var_10 = 8424196138530496638LL;
int var_12 = 488744583;
int zero = 0;
int var_14 = -189012896;
unsigned short var_15 = (unsigned short)30065;
short var_16 = (short)-20201;
long long int var_17 = -819406390614294903LL;
int var_18 = 1857044449;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
