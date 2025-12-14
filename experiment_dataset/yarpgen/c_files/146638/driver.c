#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)2067;
int var_6 = -829472091;
unsigned int var_9 = 3144799417U;
long long int var_11 = 2271341532281276262LL;
int zero = 0;
unsigned short var_14 = (unsigned short)46160;
unsigned short var_15 = (unsigned short)36251;
int var_16 = -155380636;
signed char var_17 = (signed char)73;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
