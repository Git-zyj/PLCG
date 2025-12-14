#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5611;
int var_2 = 386786495;
unsigned short var_4 = (unsigned short)17814;
unsigned short var_5 = (unsigned short)57275;
unsigned short var_7 = (unsigned short)50433;
unsigned char var_8 = (unsigned char)46;
short var_9 = (short)-22973;
unsigned short var_10 = (unsigned short)39264;
int zero = 0;
signed char var_14 = (signed char)12;
short var_15 = (short)23488;
unsigned short var_16 = (unsigned short)12452;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
