#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2496618740U;
unsigned short var_4 = (unsigned short)61809;
int var_6 = -496844916;
unsigned short var_9 = (unsigned short)47945;
int zero = 0;
unsigned int var_11 = 3983735467U;
signed char var_12 = (signed char)48;
unsigned short var_13 = (unsigned short)33364;
int var_14 = 1219624075;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
