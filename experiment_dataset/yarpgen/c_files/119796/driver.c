#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)58822;
unsigned short var_4 = (unsigned short)36441;
long long int var_5 = -352258882731651058LL;
int zero = 0;
int var_14 = -1816422768;
signed char var_15 = (signed char)110;
int var_16 = 1133043360;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
