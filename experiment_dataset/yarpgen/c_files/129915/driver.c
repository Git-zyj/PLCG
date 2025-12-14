#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 745849911;
short var_6 = (short)6384;
unsigned long long int var_12 = 1145003468769648100ULL;
short var_14 = (short)28947;
unsigned short var_16 = (unsigned short)43412;
int zero = 0;
unsigned int var_17 = 3684683295U;
int var_18 = -553128747;
int var_19 = -1880765351;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 16275218404053871467ULL;
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
