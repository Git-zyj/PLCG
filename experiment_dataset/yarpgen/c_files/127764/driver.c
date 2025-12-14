#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3057041662U;
unsigned char var_1 = (unsigned char)73;
unsigned long long int var_2 = 3547454307930378178ULL;
unsigned long long int var_4 = 14248068952408715474ULL;
signed char var_6 = (signed char)-27;
int var_8 = -199724570;
unsigned char var_9 = (unsigned char)205;
long long int var_10 = -3565230316814916848LL;
long long int var_11 = 2736505215887363698LL;
short var_13 = (short)-6713;
int var_14 = -1802099843;
_Bool var_15 = (_Bool)1;
int var_16 = -1993347462;
int zero = 0;
signed char var_17 = (signed char)-24;
short var_18 = (short)11294;
int var_19 = -1359792596;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
