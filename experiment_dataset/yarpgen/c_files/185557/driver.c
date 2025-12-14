#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2420295066U;
int var_2 = 358045186;
unsigned short var_5 = (unsigned short)822;
unsigned int var_7 = 3499562317U;
unsigned int var_8 = 1479885466U;
int var_10 = 886228228;
int zero = 0;
unsigned int var_11 = 2505884137U;
unsigned char var_12 = (unsigned char)192;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
