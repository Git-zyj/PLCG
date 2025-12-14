#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)42;
signed char var_7 = (signed char)-9;
int var_8 = -311043706;
unsigned char var_9 = (unsigned char)99;
short var_11 = (short)30776;
unsigned short var_14 = (unsigned short)31607;
unsigned int var_15 = 547572751U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)233;
short var_21 = (short)-5859;
unsigned short var_22 = (unsigned short)3992;
unsigned int var_23 = 3727252324U;
void init() {
}

void checksum() {
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
