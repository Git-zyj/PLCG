#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-31827;
unsigned int var_4 = 2595171902U;
int var_7 = 1388178428;
int var_8 = 1724601603;
int var_10 = -478998299;
long long int var_15 = -8608907619522699687LL;
int var_18 = -1120828889;
int zero = 0;
unsigned short var_19 = (unsigned short)63806;
signed char var_20 = (signed char)-92;
unsigned char var_21 = (unsigned char)5;
unsigned long long int var_22 = 11818818175569825110ULL;
unsigned int var_23 = 1053540059U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
