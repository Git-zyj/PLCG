#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 910536349U;
unsigned long long int var_6 = 5150138725149482584ULL;
long long int var_8 = -6172754910055511883LL;
int var_9 = -947386425;
short var_10 = (short)-26989;
long long int var_11 = 5465233469372626153LL;
int zero = 0;
short var_12 = (short)-5729;
unsigned long long int var_13 = 13979987739940042980ULL;
_Bool var_14 = (_Bool)0;
long long int var_15 = -7901606074419763027LL;
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
