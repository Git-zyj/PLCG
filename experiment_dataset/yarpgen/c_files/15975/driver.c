#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2090441408;
short var_1 = (short)3017;
unsigned long long int var_3 = 13309443802093836096ULL;
int var_6 = -1773268198;
unsigned short var_8 = (unsigned short)39114;
unsigned long long int var_9 = 15594547643310092227ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)173;
unsigned char var_11 = (unsigned char)116;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
