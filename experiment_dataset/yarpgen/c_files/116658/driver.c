#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16619034361397696731ULL;
short var_1 = (short)25252;
long long int var_2 = 2162008813006389399LL;
unsigned short var_3 = (unsigned short)23661;
unsigned long long int var_8 = 7015083287645925820ULL;
signed char var_10 = (signed char)47;
int var_11 = -902679245;
unsigned long long int var_12 = 9658524822470665344ULL;
unsigned char var_14 = (unsigned char)145;
int zero = 0;
unsigned short var_15 = (unsigned short)40708;
int var_16 = -1557840674;
unsigned char var_17 = (unsigned char)118;
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
