#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2561329770U;
unsigned int var_2 = 412774194U;
int var_5 = -1312845335;
int zero = 0;
unsigned short var_14 = (unsigned short)29392;
signed char var_15 = (signed char)25;
long long int var_16 = -5539606913748061120LL;
short var_17 = (short)17684;
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
