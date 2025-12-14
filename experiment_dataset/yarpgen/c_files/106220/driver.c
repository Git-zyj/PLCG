#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4837364420880264179ULL;
signed char var_5 = (signed char)77;
short var_6 = (short)21275;
unsigned long long int var_8 = 16939147679153686425ULL;
unsigned long long int var_9 = 18151163820324758813ULL;
unsigned char var_10 = (unsigned char)20;
signed char var_12 = (signed char)18;
signed char var_13 = (signed char)63;
short var_14 = (short)-13433;
unsigned short var_15 = (unsigned short)7122;
short var_16 = (short)24653;
long long int var_17 = -5296150562794606590LL;
int zero = 0;
unsigned char var_20 = (unsigned char)158;
signed char var_21 = (signed char)125;
unsigned int var_22 = 607992204U;
void init() {
}

void checksum() {
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
