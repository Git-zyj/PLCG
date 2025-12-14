#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)87;
_Bool var_2 = (_Bool)0;
long long int var_4 = -5264553979085050030LL;
long long int var_5 = 6584049278582586312LL;
long long int var_6 = -2055975929536334390LL;
long long int var_7 = -8332273569595025006LL;
unsigned short var_8 = (unsigned short)2323;
int zero = 0;
long long int var_11 = 6181913135705409800LL;
long long int var_12 = 3629388758742481756LL;
unsigned int var_13 = 3075836598U;
unsigned int var_14 = 739890797U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
