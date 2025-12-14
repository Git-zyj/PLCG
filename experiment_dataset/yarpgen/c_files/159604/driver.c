#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-53;
short var_3 = (short)3998;
unsigned long long int var_5 = 9377685879124072211ULL;
short var_6 = (short)-9118;
unsigned char var_11 = (unsigned char)232;
unsigned long long int var_12 = 11776951898926180187ULL;
long long int var_13 = -6218335810788282757LL;
int zero = 0;
signed char var_14 = (signed char)-17;
long long int var_15 = 5942746734791318538LL;
unsigned int var_16 = 1559224433U;
unsigned long long int var_17 = 17026946404313089793ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
