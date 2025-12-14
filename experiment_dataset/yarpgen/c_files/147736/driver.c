#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12733;
long long int var_5 = -8860948350715631413LL;
short var_6 = (short)8977;
unsigned int var_8 = 559783677U;
short var_10 = (short)-17480;
short var_12 = (short)-29162;
unsigned int var_14 = 619244720U;
int zero = 0;
long long int var_16 = 5627735126090377003LL;
long long int var_17 = 8769560532294782760LL;
unsigned short var_18 = (unsigned short)826;
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
