#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)146;
unsigned char var_1 = (unsigned char)47;
unsigned long long int var_5 = 8237451221823536458ULL;
int zero = 0;
int var_10 = -518875030;
unsigned short var_11 = (unsigned short)30924;
int var_12 = 418776007;
unsigned short var_13 = (unsigned short)42539;
unsigned short var_14 = (unsigned short)7322;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
