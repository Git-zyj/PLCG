#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1003007180;
short var_2 = (short)-22387;
int var_5 = 446153724;
unsigned long long int var_7 = 3396806518038743508ULL;
unsigned short var_8 = (unsigned short)51193;
long long int var_9 = 7929274955219382992LL;
_Bool var_10 = (_Bool)1;
int var_11 = -1420283038;
int var_12 = 1159421427;
int zero = 0;
unsigned long long int var_15 = 14390368205811701247ULL;
unsigned long long int var_16 = 2763708519736471443ULL;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)26783;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
