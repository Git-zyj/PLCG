#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2018520341U;
signed char var_3 = (signed char)-115;
int var_4 = 1464645298;
int var_5 = -1702331270;
signed char var_6 = (signed char)40;
_Bool var_7 = (_Bool)0;
short var_9 = (short)-18088;
short var_11 = (short)-15995;
unsigned short var_12 = (unsigned short)6000;
int zero = 0;
int var_13 = -466316353;
int var_14 = 1349624150;
signed char var_15 = (signed char)90;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-30486;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
