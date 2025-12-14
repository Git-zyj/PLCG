#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)77;
unsigned short var_5 = (unsigned short)58855;
unsigned long long int var_6 = 17800855371260239341ULL;
unsigned char var_7 = (unsigned char)12;
int zero = 0;
unsigned short var_10 = (unsigned short)23838;
unsigned short var_11 = (unsigned short)51290;
short var_12 = (short)-24256;
unsigned long long int var_13 = 6902627166582315461ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
