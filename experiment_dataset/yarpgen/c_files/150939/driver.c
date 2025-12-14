#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)39760;
unsigned char var_9 = (unsigned char)150;
unsigned short var_10 = (unsigned short)61481;
unsigned long long int var_11 = 15121938977957124096ULL;
short var_14 = (short)-12291;
int zero = 0;
unsigned short var_15 = (unsigned short)20147;
long long int var_16 = 3488824937638942085LL;
int var_17 = -1564458760;
void init() {
}

void checksum() {
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
