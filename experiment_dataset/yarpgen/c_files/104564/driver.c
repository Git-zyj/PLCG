#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)232;
long long int var_4 = -4583165542527126545LL;
long long int var_5 = 4487952458940102494LL;
signed char var_8 = (signed char)62;
unsigned short var_11 = (unsigned short)37821;
int var_12 = -851885787;
int zero = 0;
unsigned long long int var_14 = 16008659617860041329ULL;
unsigned short var_15 = (unsigned short)2384;
short var_16 = (short)6581;
void init() {
}

void checksum() {
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
