#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)167;
unsigned char var_11 = (unsigned char)230;
unsigned char var_13 = (unsigned char)73;
unsigned long long int var_15 = 5535327319203036321ULL;
unsigned char var_17 = (unsigned char)207;
int zero = 0;
unsigned long long int var_20 = 12412743943597177605ULL;
unsigned char var_21 = (unsigned char)211;
unsigned char var_22 = (unsigned char)12;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
