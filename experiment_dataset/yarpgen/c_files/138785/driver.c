#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 14288022102366869973ULL;
unsigned int var_4 = 3907496702U;
unsigned long long int var_8 = 13392037774266867995ULL;
unsigned short var_9 = (unsigned short)4796;
unsigned char var_10 = (unsigned char)17;
unsigned int var_11 = 2056629724U;
int zero = 0;
int var_12 = 1683980715;
signed char var_13 = (signed char)-91;
short var_14 = (short)31986;
void init() {
}

void checksum() {
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
