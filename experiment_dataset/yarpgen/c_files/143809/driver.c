#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8544022820886976690LL;
unsigned short var_1 = (unsigned short)48296;
short var_3 = (short)-21425;
unsigned int var_4 = 3652058990U;
unsigned int var_7 = 3240457438U;
int var_9 = 1308832983;
int zero = 0;
unsigned int var_11 = 2666113679U;
long long int var_12 = -2713086442883565167LL;
unsigned long long int var_13 = 10475333027802832287ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
