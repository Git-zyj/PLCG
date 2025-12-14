#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49601;
unsigned long long int var_4 = 11385258215179469684ULL;
short var_7 = (short)-18373;
unsigned char var_11 = (unsigned char)196;
int zero = 0;
unsigned short var_12 = (unsigned short)48870;
signed char var_13 = (signed char)-99;
void init() {
}

void checksum() {
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
