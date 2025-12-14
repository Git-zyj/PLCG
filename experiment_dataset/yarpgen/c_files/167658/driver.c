#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -101341318;
int var_7 = 1240247021;
unsigned char var_8 = (unsigned char)175;
unsigned char var_12 = (unsigned char)109;
long long int var_13 = -8966523926657659480LL;
short var_14 = (short)5129;
int zero = 0;
short var_15 = (short)12292;
short var_16 = (short)-23715;
unsigned short var_17 = (unsigned short)29854;
int var_18 = 833930218;
unsigned int var_19 = 3995130417U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
