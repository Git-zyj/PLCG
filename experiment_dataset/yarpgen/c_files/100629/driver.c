#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17842;
unsigned char var_1 = (unsigned char)192;
unsigned long long int var_11 = 8453877195659924120ULL;
unsigned char var_12 = (unsigned char)187;
short var_14 = (short)-14277;
long long int var_17 = 4119100829791523247LL;
int zero = 0;
unsigned char var_18 = (unsigned char)91;
unsigned char var_19 = (unsigned char)69;
unsigned char var_20 = (unsigned char)109;
void init() {
}

void checksum() {
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
