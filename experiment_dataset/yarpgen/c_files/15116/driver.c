#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -124806948769684959LL;
int var_1 = 676032584;
int var_2 = 1825674297;
unsigned long long int var_3 = 17319912310224881843ULL;
unsigned long long int var_4 = 2203964497813551135ULL;
unsigned long long int var_5 = 994135092803650239ULL;
unsigned long long int var_6 = 5271564290352061807ULL;
long long int var_7 = 8850713657767766102LL;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_10 = 7442118016048667313LL;
short var_11 = (short)19926;
unsigned int var_12 = 3103744515U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
