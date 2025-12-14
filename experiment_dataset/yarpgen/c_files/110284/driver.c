#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9545;
unsigned short var_4 = (unsigned short)2746;
int var_7 = 1318526501;
unsigned long long int var_11 = 1893114792744936129ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)58900;
unsigned short var_16 = (unsigned short)61314;
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
