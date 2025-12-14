#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19917;
unsigned char var_2 = (unsigned char)141;
short var_3 = (short)-10903;
short var_4 = (short)612;
unsigned int var_6 = 4140966731U;
int var_7 = -200358609;
int zero = 0;
short var_10 = (short)-6362;
unsigned long long int var_11 = 7169159145380058670ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
