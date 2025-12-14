#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28688;
unsigned int var_3 = 1903476167U;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 2181234636U;
unsigned char var_7 = (unsigned char)92;
signed char var_8 = (signed char)-30;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = 1652146213;
unsigned short var_13 = (unsigned short)45013;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)158;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
