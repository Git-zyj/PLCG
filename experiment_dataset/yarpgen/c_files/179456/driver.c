#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-30796;
short var_2 = (short)-14951;
long long int var_7 = 7968536739453587590LL;
int var_8 = 463513332;
unsigned int var_11 = 597482890U;
unsigned int var_15 = 4255939468U;
unsigned int var_17 = 812885595U;
unsigned char var_18 = (unsigned char)191;
int zero = 0;
short var_19 = (short)11433;
unsigned int var_20 = 576296579U;
int var_21 = 475771540;
unsigned char var_22 = (unsigned char)210;
unsigned short var_23 = (unsigned short)26865;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
