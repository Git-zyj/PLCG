#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15750943544828337249ULL;
unsigned char var_3 = (unsigned char)153;
unsigned int var_4 = 1852526922U;
signed char var_5 = (signed char)113;
signed char var_10 = (signed char)(-127 - 1);
signed char var_11 = (signed char)15;
unsigned char var_14 = (unsigned char)222;
signed char var_15 = (signed char)-94;
unsigned char var_16 = (unsigned char)179;
unsigned char var_17 = (unsigned char)83;
_Bool var_19 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-85;
unsigned char var_22 = (unsigned char)185;
unsigned int var_23 = 4106244299U;
unsigned char var_24 = (unsigned char)200;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
