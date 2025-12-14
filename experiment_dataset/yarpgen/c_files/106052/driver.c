#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2934939310U;
unsigned short var_3 = (unsigned short)21995;
unsigned int var_5 = 3671876841U;
short var_6 = (short)-19737;
signed char var_7 = (signed char)-9;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)54;
int zero = 0;
long long int var_11 = 3907061416372530936LL;
int var_12 = 278841761;
int var_13 = 1665478378;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
