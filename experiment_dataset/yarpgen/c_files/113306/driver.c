#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = -8445308504305253253LL;
signed char var_3 = (signed char)1;
unsigned long long int var_5 = 16275289464410763998ULL;
short var_8 = (short)-32734;
long long int var_9 = 1274705023780583987LL;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)126;
short var_14 = (short)-10910;
unsigned int var_16 = 2412695989U;
int zero = 0;
unsigned char var_17 = (unsigned char)165;
long long int var_18 = 3743301060603904899LL;
long long int var_19 = 8300473464812365583LL;
unsigned int var_20 = 2779717182U;
short var_21 = (short)3240;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
