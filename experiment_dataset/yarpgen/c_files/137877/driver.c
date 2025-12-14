#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)112;
unsigned int var_1 = 3174494817U;
int var_5 = -315869480;
short var_8 = (short)-1406;
int zero = 0;
short var_10 = (short)16216;
unsigned int var_11 = 610785920U;
unsigned int var_12 = 3644215233U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
