#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)246;
long long int var_1 = -5959132221887829392LL;
unsigned char var_3 = (unsigned char)250;
long long int var_4 = 176689808158168024LL;
unsigned short var_7 = (unsigned short)1593;
long long int var_8 = -3307764012713048080LL;
long long int var_9 = 7955852919141421613LL;
unsigned char var_12 = (unsigned char)247;
signed char var_13 = (signed char)83;
unsigned int var_14 = 1600452069U;
unsigned long long int var_15 = 9859475620892957305ULL;
unsigned int var_16 = 4174339298U;
unsigned char var_17 = (unsigned char)120;
int zero = 0;
short var_20 = (short)-22258;
unsigned short var_21 = (unsigned short)42810;
long long int var_22 = -613377079282025091LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
