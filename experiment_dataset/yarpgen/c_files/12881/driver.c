#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28015;
unsigned char var_1 = (unsigned char)114;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)42;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)44091;
signed char var_13 = (signed char)-79;
short var_14 = (short)-17154;
short var_15 = (short)-7515;
long long int var_16 = -1382961092840742073LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
