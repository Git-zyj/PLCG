#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23221;
_Bool var_4 = (_Bool)0;
int var_5 = -1589365045;
unsigned short var_6 = (unsigned short)42672;
_Bool var_8 = (_Bool)1;
_Bool var_12 = (_Bool)1;
signed char var_17 = (signed char)3;
int zero = 0;
signed char var_18 = (signed char)78;
unsigned int var_19 = 3088536962U;
_Bool var_20 = (_Bool)0;
int var_21 = -410233998;
short var_22 = (short)-32730;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
