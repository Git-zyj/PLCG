#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)131;
unsigned int var_16 = 731375447U;
unsigned int var_19 = 901501458U;
int zero = 0;
short var_20 = (short)-3058;
short var_21 = (short)-30321;
unsigned char var_22 = (unsigned char)139;
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
