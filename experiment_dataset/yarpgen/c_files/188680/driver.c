#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44612;
unsigned long long int var_1 = 535911727610329574ULL;
short var_6 = (short)8306;
unsigned short var_8 = (unsigned short)11563;
long long int var_9 = 7618970434824843480LL;
unsigned long long int var_10 = 2257316126174076304ULL;
unsigned long long int var_14 = 10642480915174319404ULL;
int zero = 0;
short var_15 = (short)-10237;
unsigned char var_16 = (unsigned char)236;
unsigned char var_17 = (unsigned char)88;
void init() {
}

void checksum() {
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
