#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34682;
signed char var_4 = (signed char)1;
unsigned long long int var_8 = 16067829888730115790ULL;
unsigned short var_10 = (unsigned short)33016;
unsigned short var_12 = (unsigned short)21579;
unsigned char var_14 = (unsigned char)119;
int zero = 0;
unsigned long long int var_15 = 11207175986506184618ULL;
unsigned char var_16 = (unsigned char)90;
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
