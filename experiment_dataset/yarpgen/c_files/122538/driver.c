#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2601525931U;
unsigned int var_5 = 2246673539U;
unsigned short var_9 = (unsigned short)38521;
short var_12 = (short)-9333;
int zero = 0;
unsigned long long int var_13 = 14924160238133717746ULL;
short var_14 = (short)-14385;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
