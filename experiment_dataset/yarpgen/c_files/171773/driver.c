#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1639411326;
unsigned char var_2 = (unsigned char)144;
unsigned short var_5 = (unsigned short)56840;
unsigned char var_6 = (unsigned char)218;
long long int var_7 = -4105679944284309429LL;
unsigned char var_9 = (unsigned char)119;
unsigned char var_10 = (unsigned char)159;
short var_11 = (short)31383;
unsigned int var_12 = 728328594U;
int zero = 0;
unsigned short var_16 = (unsigned short)30054;
unsigned long long int var_17 = 273070682510709861ULL;
void init() {
}

void checksum() {
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
