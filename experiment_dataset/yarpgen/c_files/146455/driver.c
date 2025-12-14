#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1921289033U;
long long int var_2 = -6582791222640598615LL;
unsigned int var_3 = 249747583U;
long long int var_4 = -5924053073702691896LL;
unsigned int var_5 = 354728309U;
unsigned int var_6 = 2718674283U;
unsigned int var_7 = 928240372U;
unsigned short var_8 = (unsigned short)2650;
unsigned short var_9 = (unsigned short)7378;
unsigned int var_10 = 759732497U;
int zero = 0;
long long int var_11 = 919401710189376261LL;
long long int var_12 = -1231508936268187963LL;
unsigned int var_13 = 4260142335U;
unsigned int var_14 = 2753851199U;
unsigned int var_15 = 699373168U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
