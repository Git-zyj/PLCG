#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -6546607209016337351LL;
signed char var_9 = (signed char)-6;
long long int var_11 = -7641029743530658080LL;
unsigned short var_12 = (unsigned short)58647;
unsigned int var_16 = 3467900628U;
int zero = 0;
signed char var_18 = (signed char)-94;
long long int var_19 = -8090912783085044474LL;
signed char var_20 = (signed char)29;
unsigned char var_21 = (unsigned char)123;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
