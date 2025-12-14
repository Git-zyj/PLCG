#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3506788208257639721LL;
int var_7 = 1209838388;
long long int var_13 = -232851535603130707LL;
unsigned long long int var_16 = 15717361149105188323ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)8;
short var_19 = (short)-32146;
void init() {
}

void checksum() {
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
