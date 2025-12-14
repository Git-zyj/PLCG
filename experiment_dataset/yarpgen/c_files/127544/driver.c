#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)26;
long long int var_8 = -9128518409433865098LL;
long long int var_10 = -3994046021615666333LL;
unsigned short var_11 = (unsigned short)49682;
int var_14 = 1643200792;
unsigned char var_15 = (unsigned char)84;
int var_16 = -1716668716;
unsigned long long int var_17 = 2488184080590684477ULL;
unsigned int var_18 = 1408126598U;
int zero = 0;
unsigned short var_20 = (unsigned short)43566;
int var_21 = -101358055;
_Bool var_22 = (_Bool)1;
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
