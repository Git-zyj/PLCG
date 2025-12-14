#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-7923;
long long int var_6 = 7947097050251851581LL;
short var_13 = (short)-23878;
int zero = 0;
long long int var_14 = 8608192469560151958LL;
unsigned short var_15 = (unsigned short)18754;
void init() {
}

void checksum() {
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
