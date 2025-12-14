#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-22390;
unsigned long long int var_8 = 2832105210596110428ULL;
unsigned long long int var_9 = 16396024285608490392ULL;
long long int var_10 = -5311457778887591715LL;
unsigned char var_12 = (unsigned char)221;
unsigned char var_15 = (unsigned char)178;
short var_17 = (short)-7463;
int zero = 0;
unsigned short var_18 = (unsigned short)61011;
int var_19 = 1503990623;
void init() {
}

void checksum() {
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
