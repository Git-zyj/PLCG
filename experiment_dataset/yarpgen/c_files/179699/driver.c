#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3406762354U;
unsigned short var_11 = (unsigned short)50342;
_Bool var_15 = (_Bool)1;
unsigned short var_17 = (unsigned short)12514;
unsigned short var_18 = (unsigned short)59418;
int zero = 0;
long long int var_19 = -6392790919419355589LL;
_Bool var_20 = (_Bool)0;
short var_21 = (short)11744;
unsigned short var_22 = (unsigned short)54122;
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
