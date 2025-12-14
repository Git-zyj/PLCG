#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8895316470886790360LL;
int var_6 = -803899973;
unsigned short var_7 = (unsigned short)37191;
int var_8 = 1090198058;
int var_9 = 1532227427;
unsigned int var_12 = 2063764771U;
unsigned char var_13 = (unsigned char)24;
int var_14 = -877729705;
int var_15 = -685014116;
int zero = 0;
unsigned short var_16 = (unsigned short)901;
short var_17 = (short)-22149;
short var_18 = (short)-24446;
unsigned char var_19 = (unsigned char)39;
void init() {
}

void checksum() {
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
