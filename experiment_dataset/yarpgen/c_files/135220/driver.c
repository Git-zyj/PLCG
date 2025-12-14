#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 738624807;
unsigned int var_6 = 2785806980U;
unsigned int var_8 = 4116395059U;
long long int var_10 = 2239722860451966675LL;
unsigned short var_12 = (unsigned short)12166;
short var_14 = (short)-9146;
int zero = 0;
long long int var_19 = 4500134215157816323LL;
unsigned short var_20 = (unsigned short)64976;
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
