#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2514906822U;
unsigned char var_3 = (unsigned char)135;
int var_4 = 1845488536;
short var_5 = (short)-32298;
signed char var_10 = (signed char)-87;
unsigned int var_12 = 2062919819U;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-20533;
int zero = 0;
unsigned short var_18 = (unsigned short)11534;
int var_19 = -1941083344;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
