#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -353504424;
unsigned int var_5 = 978892079U;
unsigned short var_12 = (unsigned short)1001;
unsigned short var_13 = (unsigned short)37033;
int zero = 0;
short var_18 = (short)-2998;
unsigned short var_19 = (unsigned short)29168;
void init() {
}

void checksum() {
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
