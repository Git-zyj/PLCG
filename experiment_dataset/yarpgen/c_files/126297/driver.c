#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1626131401U;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 10328267208425228441ULL;
signed char var_7 = (signed char)0;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)60445;
unsigned int var_13 = 2399831429U;
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
