#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)20420;
unsigned char var_4 = (unsigned char)175;
unsigned int var_6 = 1148773545U;
unsigned short var_7 = (unsigned short)7548;
unsigned int var_8 = 1109622886U;
unsigned char var_13 = (unsigned char)112;
int zero = 0;
unsigned char var_17 = (unsigned char)161;
long long int var_18 = -4969218742099602821LL;
unsigned int var_19 = 1334744051U;
_Bool var_20 = (_Bool)1;
long long int var_21 = -3196045429495839346LL;
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
