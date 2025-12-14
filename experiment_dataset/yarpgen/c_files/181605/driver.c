#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)119;
unsigned char var_1 = (unsigned char)72;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)8;
short var_4 = (short)-12976;
short var_5 = (short)29176;
_Bool var_6 = (_Bool)0;
long long int var_8 = 5643603164620530536LL;
unsigned long long int var_9 = 5416103443663530960ULL;
unsigned int var_10 = 3008920046U;
_Bool var_11 = (_Bool)0;
int var_12 = 1053151298;
unsigned char var_13 = (unsigned char)227;
int var_14 = 555532505;
unsigned long long int var_15 = 14285360575200921728ULL;
int zero = 0;
signed char var_16 = (signed char)-112;
signed char var_17 = (signed char)-92;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
