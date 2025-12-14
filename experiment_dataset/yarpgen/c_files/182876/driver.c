#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 439588783U;
unsigned long long int var_2 = 2164397362377518673ULL;
unsigned long long int var_6 = 14133949781038959145ULL;
unsigned int var_7 = 894446554U;
long long int var_8 = -3726463107544797628LL;
int zero = 0;
long long int var_13 = 7167378803015865994LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
