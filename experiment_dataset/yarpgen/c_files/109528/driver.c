#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = -2134785312;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)39893;
unsigned int var_9 = 1861802154U;
long long int var_11 = -7418583799074549172LL;
int zero = 0;
unsigned long long int var_12 = 14115114270970838572ULL;
unsigned short var_13 = (unsigned short)53337;
unsigned short var_14 = (unsigned short)21078;
unsigned short var_15 = (unsigned short)65052;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
