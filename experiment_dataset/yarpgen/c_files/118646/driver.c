#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9639324749545215291ULL;
unsigned int var_2 = 3754156880U;
short var_3 = (short)-11903;
short var_4 = (short)29802;
unsigned char var_5 = (unsigned char)114;
unsigned long long int var_6 = 5324412115990175682ULL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)16178;
unsigned long long int var_10 = 551029313187488456ULL;
unsigned int var_11 = 2924295774U;
unsigned char var_12 = (unsigned char)135;
short var_16 = (short)-2365;
int zero = 0;
unsigned char var_17 = (unsigned char)37;
short var_18 = (short)3330;
unsigned long long int var_19 = 8754805648844365812ULL;
short var_20 = (short)30510;
short var_21 = (short)-12025;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
