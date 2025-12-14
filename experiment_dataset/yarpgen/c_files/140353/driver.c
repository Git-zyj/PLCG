#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-5091;
unsigned int var_7 = 2278445879U;
unsigned int var_15 = 3717952147U;
int zero = 0;
unsigned short var_20 = (unsigned short)48788;
short var_21 = (short)-17164;
long long int var_22 = -2120234367269411708LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
