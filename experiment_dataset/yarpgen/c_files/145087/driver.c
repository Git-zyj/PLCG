#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)33;
_Bool var_7 = (_Bool)0;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)99;
unsigned long long int var_16 = 8719990503277596035ULL;
int zero = 0;
signed char var_17 = (signed char)64;
unsigned char var_18 = (unsigned char)20;
_Bool var_19 = (_Bool)0;
int var_20 = 474667008;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
