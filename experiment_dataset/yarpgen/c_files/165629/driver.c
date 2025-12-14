#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -40532962;
unsigned short var_3 = (unsigned short)39939;
int var_4 = -548858190;
short var_5 = (short)-11192;
int var_10 = -529583327;
int zero = 0;
unsigned short var_11 = (unsigned short)58934;
int var_12 = 1652981881;
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
