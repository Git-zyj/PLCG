#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7106;
long long int var_1 = 4903156960883527892LL;
unsigned int var_7 = 3831206508U;
short var_10 = (short)27131;
unsigned int var_11 = 2237900681U;
int zero = 0;
int var_14 = 85788899;
long long int var_15 = -5066158724420049250LL;
unsigned short var_16 = (unsigned short)15988;
unsigned char var_17 = (unsigned char)56;
void init() {
}

void checksum() {
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
