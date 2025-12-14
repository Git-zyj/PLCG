#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)6658;
int var_6 = -1357985096;
short var_10 = (short)-6221;
int zero = 0;
unsigned char var_14 = (unsigned char)95;
long long int var_15 = 8131592917990097639LL;
unsigned int var_16 = 1665367890U;
int var_17 = 376251590;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
