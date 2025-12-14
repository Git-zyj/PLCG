#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)21;
unsigned char var_5 = (unsigned char)112;
unsigned long long int var_6 = 17840113493947728767ULL;
unsigned long long int var_7 = 10547156839343946526ULL;
unsigned int var_12 = 3859557655U;
short var_14 = (short)-3845;
unsigned int var_16 = 1086294871U;
int zero = 0;
int var_17 = -1201923336;
int var_18 = 1480181247;
void init() {
}

void checksum() {
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
