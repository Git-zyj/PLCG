#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1877567757;
unsigned short var_1 = (unsigned short)37080;
short var_2 = (short)-18243;
unsigned short var_3 = (unsigned short)58427;
unsigned int var_4 = 2067460444U;
unsigned short var_5 = (unsigned short)38721;
long long int var_6 = -8143530241296446173LL;
unsigned long long int var_7 = 14489646634323120239ULL;
unsigned short var_8 = (unsigned short)53099;
unsigned int var_10 = 2695719261U;
unsigned char var_11 = (unsigned char)144;
int zero = 0;
unsigned short var_12 = (unsigned short)30628;
unsigned char var_13 = (unsigned char)128;
unsigned char var_14 = (unsigned char)216;
unsigned short var_15 = (unsigned short)3928;
unsigned int var_16 = 1077721580U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
