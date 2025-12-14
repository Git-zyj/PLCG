#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)147;
int var_2 = -1874505779;
unsigned long long int var_5 = 10447706894911676691ULL;
signed char var_7 = (signed char)(-127 - 1);
short var_8 = (short)93;
unsigned short var_10 = (unsigned short)9495;
unsigned long long int var_11 = 4394719335837136336ULL;
unsigned long long int var_12 = 15623488967906583175ULL;
unsigned long long int var_14 = 1765627967571095452ULL;
int var_15 = -1894028601;
int zero = 0;
unsigned long long int var_16 = 1029499965439532308ULL;
unsigned long long int var_17 = 14722417039923453139ULL;
int var_18 = 1780445504;
short var_19 = (short)-15449;
short var_20 = (short)-4176;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
