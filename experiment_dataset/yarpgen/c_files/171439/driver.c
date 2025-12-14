#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-72;
_Bool var_5 = (_Bool)1;
int var_6 = -540150423;
int var_7 = 1365757498;
long long int var_10 = -9010432512896541909LL;
unsigned char var_11 = (unsigned char)148;
int var_13 = -882982936;
int zero = 0;
unsigned char var_14 = (unsigned char)17;
int var_15 = -820762573;
int var_16 = -818319720;
short var_17 = (short)-18278;
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
