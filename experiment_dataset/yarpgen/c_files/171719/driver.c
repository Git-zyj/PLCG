#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
unsigned int var_7 = 4102152918U;
unsigned long long int var_9 = 1411620327242519675ULL;
unsigned short var_12 = (unsigned short)9023;
unsigned char var_15 = (unsigned char)116;
int zero = 0;
unsigned long long int var_17 = 8570333833554473859ULL;
unsigned long long int var_18 = 15653029410424464813ULL;
int var_19 = 1267027638;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
