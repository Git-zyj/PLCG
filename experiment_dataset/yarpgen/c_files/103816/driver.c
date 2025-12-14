#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -194228830;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)973;
short var_5 = (short)-17590;
short var_10 = (short)16007;
unsigned char var_12 = (unsigned char)67;
unsigned short var_14 = (unsigned short)64188;
int zero = 0;
unsigned char var_16 = (unsigned char)199;
long long int var_17 = -8435617416446185659LL;
unsigned char var_18 = (unsigned char)140;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
