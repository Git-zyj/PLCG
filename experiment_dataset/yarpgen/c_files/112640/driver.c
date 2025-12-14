#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11763354805256982916ULL;
int var_7 = 12731646;
unsigned long long int var_8 = 14860332767945098766ULL;
unsigned long long int var_9 = 14394619071795023246ULL;
unsigned int var_10 = 2866491729U;
unsigned int var_11 = 1841021144U;
unsigned long long int var_15 = 9293498911627958823ULL;
signed char var_16 = (signed char)3;
int zero = 0;
unsigned char var_17 = (unsigned char)198;
unsigned long long int var_18 = 13667699137588729557ULL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
