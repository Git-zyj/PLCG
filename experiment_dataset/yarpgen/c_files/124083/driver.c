#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22082;
int var_1 = 487339862;
unsigned char var_3 = (unsigned char)118;
long long int var_4 = 5931067087517663729LL;
unsigned char var_7 = (unsigned char)92;
unsigned char var_9 = (unsigned char)8;
unsigned int var_10 = 1924858296U;
int zero = 0;
unsigned char var_11 = (unsigned char)37;
unsigned short var_12 = (unsigned short)23705;
unsigned long long int var_13 = 14874286848218619600ULL;
unsigned short var_14 = (unsigned short)25327;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
