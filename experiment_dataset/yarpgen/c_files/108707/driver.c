#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17607165957688831927ULL;
long long int var_1 = 6451247052127817003LL;
unsigned int var_3 = 951686502U;
int var_4 = 1152486684;
unsigned int var_5 = 1361898332U;
int var_11 = 2140573221;
unsigned char var_12 = (unsigned char)113;
unsigned long long int var_13 = 18289204025446493526ULL;
int zero = 0;
short var_16 = (short)-359;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-10861;
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
