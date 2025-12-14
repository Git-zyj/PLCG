#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4883643481863720530ULL;
long long int var_1 = 8781481671931072458LL;
unsigned char var_3 = (unsigned char)99;
short var_4 = (short)21340;
long long int var_5 = 1524360296217688237LL;
unsigned int var_8 = 1108836561U;
unsigned short var_10 = (unsigned short)23848;
signed char var_15 = (signed char)35;
int zero = 0;
int var_16 = 555897228;
short var_17 = (short)-1410;
long long int var_18 = 3717272796050674859LL;
long long int var_19 = 7515534050741393478LL;
short var_20 = (short)-862;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
