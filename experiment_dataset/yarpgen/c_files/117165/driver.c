#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)113;
short var_9 = (short)-17844;
_Bool var_11 = (_Bool)0;
long long int var_14 = 7431814355252038824LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3351879005U;
unsigned int var_20 = 1223262977U;
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
