#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7717166244469600636LL;
long long int var_5 = -1039981428801718484LL;
signed char var_7 = (signed char)123;
unsigned int var_13 = 568501283U;
long long int var_14 = -3658720467030005471LL;
long long int var_15 = -4035381949095628218LL;
long long int var_16 = 3877172319270547030LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 8866764778111453084ULL;
signed char var_20 = (signed char)3;
signed char var_21 = (signed char)88;
signed char var_22 = (signed char)82;
long long int var_23 = -3553076341635063493LL;
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
