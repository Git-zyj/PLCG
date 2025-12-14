#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35750;
int var_3 = -708566211;
unsigned char var_4 = (unsigned char)36;
unsigned char var_6 = (unsigned char)84;
int zero = 0;
unsigned long long int var_11 = 7184872239926062127ULL;
unsigned short var_12 = (unsigned short)61854;
unsigned long long int var_13 = 223949830561311173ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
