#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)83;
short var_1 = (short)-22663;
unsigned char var_2 = (unsigned char)70;
int var_3 = 1840424330;
unsigned int var_6 = 3358919468U;
unsigned short var_8 = (unsigned short)61957;
long long int var_13 = 1612090455369454656LL;
signed char var_14 = (signed char)29;
int zero = 0;
unsigned int var_15 = 1058078787U;
unsigned short var_16 = (unsigned short)56105;
_Bool var_17 = (_Bool)1;
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
