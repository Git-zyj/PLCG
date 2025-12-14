#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 2845742743640826331LL;
unsigned short var_3 = (unsigned short)26199;
long long int var_4 = 8002737418101238027LL;
signed char var_5 = (signed char)-97;
unsigned short var_10 = (unsigned short)47911;
unsigned int var_11 = 1075203595U;
_Bool var_14 = (_Bool)1;
int var_16 = 1244137109;
_Bool var_17 = (_Bool)1;
int var_18 = 443416641;
int zero = 0;
unsigned long long int var_19 = 14435030029969935342ULL;
long long int var_20 = -3568097513619210695LL;
_Bool var_21 = (_Bool)1;
int var_22 = 1087130948;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
