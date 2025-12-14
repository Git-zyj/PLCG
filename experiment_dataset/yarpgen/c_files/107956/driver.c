#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7526775564860225665LL;
short var_8 = (short)-12411;
int zero = 0;
unsigned short var_10 = (unsigned short)37359;
short var_11 = (short)11976;
long long int var_12 = 5193170664132407020LL;
long long int var_13 = 1197549948354638775LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
