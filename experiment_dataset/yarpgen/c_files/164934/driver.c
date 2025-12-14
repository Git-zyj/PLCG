#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = -1684179587;
unsigned char var_3 = (unsigned char)201;
unsigned char var_5 = (unsigned char)81;
_Bool var_6 = (_Bool)0;
int var_7 = 60092404;
unsigned short var_8 = (unsigned short)10237;
int var_9 = -294655823;
signed char var_11 = (signed char)85;
unsigned short var_13 = (unsigned short)30780;
int var_14 = 64431861;
int zero = 0;
int var_16 = 166761886;
unsigned int var_17 = 3924304451U;
int var_18 = 1556318899;
int var_19 = -62028652;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
