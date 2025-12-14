#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1973782124U;
unsigned int var_1 = 912183135U;
_Bool var_3 = (_Bool)0;
signed char var_8 = (signed char)-35;
unsigned char var_11 = (unsigned char)219;
unsigned int var_13 = 1852852582U;
short var_14 = (short)11072;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_19 = (short)-8726;
short var_20 = (short)26317;
short var_21 = (short)-32762;
void init() {
}

void checksum() {
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
