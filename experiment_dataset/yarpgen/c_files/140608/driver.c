#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1435914378U;
signed char var_5 = (signed char)45;
unsigned long long int var_6 = 2316844592850452323ULL;
short var_8 = (short)14972;
int var_12 = 574882211;
unsigned short var_13 = (unsigned short)32220;
int zero = 0;
unsigned int var_16 = 3989423300U;
int var_17 = 1544794866;
short var_18 = (short)16998;
long long int var_19 = 8209585047611240125LL;
short var_20 = (short)-21286;
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
