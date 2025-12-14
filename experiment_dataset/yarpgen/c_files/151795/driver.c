#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7283;
short var_3 = (short)31450;
unsigned char var_4 = (unsigned char)9;
int var_5 = -945661268;
unsigned short var_6 = (unsigned short)50477;
unsigned long long int var_7 = 3573534931562871061ULL;
unsigned char var_8 = (unsigned char)12;
int var_9 = 1345942788;
unsigned int var_10 = 3808943239U;
unsigned short var_11 = (unsigned short)34570;
signed char var_13 = (signed char)92;
signed char var_14 = (signed char)13;
int zero = 0;
unsigned int var_16 = 2239351928U;
unsigned int var_17 = 3887410960U;
int var_18 = -880506361;
unsigned int var_19 = 2129518687U;
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
