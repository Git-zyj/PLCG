#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34722;
short var_3 = (short)28006;
unsigned int var_4 = 1702847474U;
short var_7 = (short)29559;
unsigned short var_9 = (unsigned short)42465;
unsigned short var_10 = (unsigned short)24622;
unsigned short var_11 = (unsigned short)15788;
unsigned short var_12 = (unsigned short)13208;
short var_13 = (short)-5400;
short var_14 = (short)-25979;
unsigned short var_15 = (unsigned short)62974;
long long int var_16 = 3588752589429231386LL;
short var_17 = (short)-22556;
int zero = 0;
unsigned short var_19 = (unsigned short)45461;
int var_20 = 2131308751;
unsigned char var_21 = (unsigned char)10;
unsigned long long int var_22 = 2537507161010247502ULL;
_Bool var_23 = (_Bool)0;
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
