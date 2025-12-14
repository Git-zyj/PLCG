#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1882661598;
unsigned short var_6 = (unsigned short)60853;
unsigned short var_8 = (unsigned short)6364;
unsigned short var_11 = (unsigned short)17511;
int zero = 0;
unsigned short var_17 = (unsigned short)12512;
unsigned short var_18 = (unsigned short)56085;
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
