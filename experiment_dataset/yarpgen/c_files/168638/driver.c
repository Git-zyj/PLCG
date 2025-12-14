#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20628;
signed char var_1 = (signed char)-96;
short var_2 = (short)-20734;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)48938;
unsigned short var_6 = (unsigned short)55589;
_Bool var_7 = (_Bool)0;
unsigned short var_10 = (unsigned short)63053;
unsigned short var_11 = (unsigned short)47837;
int zero = 0;
unsigned short var_12 = (unsigned short)36291;
long long int var_13 = 7759887568995739983LL;
void init() {
}

void checksum() {
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
