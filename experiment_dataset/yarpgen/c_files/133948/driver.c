#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1734994472U;
short var_5 = (short)-15518;
unsigned long long int var_11 = 12095239922541619150ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)17702;
short var_13 = (short)-32359;
long long int var_14 = 4913703162255720601LL;
short var_15 = (short)-4790;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
