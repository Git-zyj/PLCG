#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)179;
unsigned long long int var_6 = 12900969122446734053ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)165;
unsigned long long int var_16 = 15912462733859405971ULL;
unsigned long long int var_17 = 11824447881578995389ULL;
unsigned long long int var_18 = 2565919402950501953ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
