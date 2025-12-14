#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44218;
unsigned int var_1 = 3369778784U;
unsigned int var_3 = 4174945308U;
unsigned int var_5 = 2433153243U;
unsigned short var_8 = (unsigned short)48630;
unsigned short var_10 = (unsigned short)15863;
int zero = 0;
unsigned int var_15 = 4211304944U;
unsigned short var_16 = (unsigned short)36419;
void init() {
}

void checksum() {
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
