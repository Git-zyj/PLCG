#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1608036330;
short var_4 = (short)-9455;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-5;
unsigned char var_7 = (unsigned char)162;
unsigned char var_8 = (unsigned char)88;
unsigned short var_10 = (unsigned short)58573;
unsigned short var_11 = (unsigned short)39043;
unsigned short var_12 = (unsigned short)1984;
long long int var_13 = -9138354755262555987LL;
int var_14 = 514753750;
int zero = 0;
int var_15 = -803683868;
short var_16 = (short)14038;
unsigned char var_17 = (unsigned char)3;
void init() {
}

void checksum() {
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
