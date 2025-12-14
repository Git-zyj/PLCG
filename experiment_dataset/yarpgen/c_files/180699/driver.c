#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30327;
unsigned int var_4 = 2078613548U;
unsigned short var_10 = (unsigned short)56071;
short var_12 = (short)-10805;
short var_14 = (short)-13939;
short var_15 = (short)-8462;
unsigned char var_16 = (unsigned char)195;
int zero = 0;
unsigned int var_18 = 1731916672U;
unsigned long long int var_19 = 15386206302506628804ULL;
int var_20 = -1655276746;
int var_21 = 1911974577;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
