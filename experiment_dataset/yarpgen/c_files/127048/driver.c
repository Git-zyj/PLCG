#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2798419910U;
unsigned short var_12 = (unsigned short)42540;
int var_13 = -1130103431;
unsigned int var_14 = 2976039674U;
int zero = 0;
long long int var_16 = -4413242882209368914LL;
short var_17 = (short)-7743;
unsigned int var_18 = 830146259U;
void init() {
}

void checksum() {
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
