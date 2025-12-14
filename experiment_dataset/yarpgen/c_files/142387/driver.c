#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)136;
short var_6 = (short)32701;
short var_8 = (short)22519;
int zero = 0;
short var_11 = (short)-21817;
short var_12 = (short)-10705;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 11044596906698524813ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
