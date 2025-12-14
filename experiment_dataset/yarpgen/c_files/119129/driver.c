#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1751854787885089428LL;
unsigned char var_1 = (unsigned char)1;
long long int var_2 = -5169021425291703503LL;
unsigned int var_3 = 2518630892U;
unsigned short var_4 = (unsigned short)37511;
long long int var_5 = -6049359863128027039LL;
unsigned int var_7 = 3262745339U;
unsigned short var_9 = (unsigned short)32736;
int var_11 = 1573971114;
int zero = 0;
int var_12 = -1999758754;
short var_13 = (short)1231;
int var_14 = -2147157523;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
