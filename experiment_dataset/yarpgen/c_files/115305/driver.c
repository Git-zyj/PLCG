#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17632945967756855827ULL;
unsigned short var_11 = (unsigned short)3391;
_Bool var_13 = (_Bool)0;
unsigned int var_17 = 835790455U;
int zero = 0;
unsigned short var_18 = (unsigned short)29361;
unsigned long long int var_19 = 9464365699420607060ULL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
