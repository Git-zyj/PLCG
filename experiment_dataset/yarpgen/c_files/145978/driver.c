#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18870;
unsigned char var_1 = (unsigned char)92;
unsigned char var_5 = (unsigned char)83;
unsigned long long int var_7 = 5833365950016193243ULL;
unsigned long long int var_8 = 4783636640117300167ULL;
short var_9 = (short)-23436;
int var_10 = 1753343065;
unsigned short var_11 = (unsigned short)12772;
int zero = 0;
int var_13 = 2015367610;
_Bool var_14 = (_Bool)1;
int var_15 = -1525098426;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
