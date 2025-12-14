#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned long long int var_12 = 2773320566851177610ULL;
int var_15 = 1907755225;
int zero = 0;
int var_17 = -1502951103;
unsigned int var_18 = 1233014018U;
unsigned char var_19 = (unsigned char)81;
long long int var_20 = -7326442303966707693LL;
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
