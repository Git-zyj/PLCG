#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3307196341267700659ULL;
short var_8 = (short)-20839;
unsigned long long int var_9 = 17796797242321653928ULL;
short var_11 = (short)16444;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1189923120U;
int var_18 = 1590772880;
int zero = 0;
long long int var_19 = -7498266965574141823LL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1831428242U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
