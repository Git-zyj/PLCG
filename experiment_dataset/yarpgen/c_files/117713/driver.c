#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2156094438U;
unsigned long long int var_4 = 1801050417510335483ULL;
unsigned long long int var_5 = 1158078940753079053ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)48;
unsigned short var_12 = (unsigned short)51678;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
