#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)102;
unsigned int var_1 = 2364774864U;
unsigned char var_2 = (unsigned char)165;
_Bool var_6 = (_Bool)1;
int var_11 = -861883527;
unsigned short var_15 = (unsigned short)62886;
unsigned char var_16 = (unsigned char)17;
int zero = 0;
short var_19 = (short)-14934;
int var_20 = 1176654;
short var_21 = (short)-16845;
long long int var_22 = -3527054055067617514LL;
unsigned char var_23 = (unsigned char)58;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
