#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 986185138U;
unsigned short var_1 = (unsigned short)10196;
unsigned short var_2 = (unsigned short)11873;
unsigned int var_4 = 2593579061U;
short var_6 = (short)3884;
unsigned int var_8 = 2184879654U;
unsigned long long int var_11 = 18434828139002891177ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)17801;
int var_14 = 863567943;
short var_15 = (short)20180;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
