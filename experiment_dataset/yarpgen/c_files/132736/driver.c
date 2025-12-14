#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)70;
unsigned long long int var_9 = 8286842209511225215ULL;
short var_11 = (short)-7687;
unsigned int var_13 = 428478267U;
int zero = 0;
int var_16 = -317019186;
unsigned char var_17 = (unsigned char)186;
unsigned int var_18 = 2391702354U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
