#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29603;
unsigned short var_5 = (unsigned short)64023;
long long int var_8 = 8736208831427847589LL;
unsigned short var_11 = (unsigned short)147;
int zero = 0;
unsigned char var_15 = (unsigned char)59;
unsigned short var_16 = (unsigned short)23220;
unsigned short var_17 = (unsigned short)64069;
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
