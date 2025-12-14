#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2623866099U;
long long int var_3 = 5956231728128757213LL;
short var_6 = (short)23833;
short var_7 = (short)-22592;
short var_9 = (short)-17861;
long long int var_10 = 5787065769992299752LL;
int var_13 = 237894842;
unsigned int var_14 = 2395643382U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)36317;
int var_19 = 1799485101;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
