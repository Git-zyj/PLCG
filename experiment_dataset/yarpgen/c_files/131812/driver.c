#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 4208472619314108652ULL;
short var_6 = (short)-1165;
signed char var_8 = (signed char)13;
unsigned char var_10 = (unsigned char)127;
unsigned int var_13 = 3584838972U;
signed char var_17 = (signed char)90;
int zero = 0;
unsigned short var_19 = (unsigned short)39668;
unsigned char var_20 = (unsigned char)11;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
