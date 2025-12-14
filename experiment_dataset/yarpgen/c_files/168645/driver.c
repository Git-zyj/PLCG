#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3299849193U;
_Bool var_5 = (_Bool)1;
int var_6 = -1317589130;
short var_7 = (short)-17689;
int zero = 0;
short var_11 = (short)-18512;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)26531;
short var_14 = (short)1900;
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
