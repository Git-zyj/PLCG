#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8567031049267744222ULL;
unsigned short var_4 = (unsigned short)20118;
unsigned char var_5 = (unsigned char)113;
unsigned char var_6 = (unsigned char)223;
unsigned long long int var_8 = 3858870871201948720ULL;
unsigned long long int var_10 = 10150437807138167093ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = -2124920184;
short var_16 = (short)27471;
short var_17 = (short)-32275;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
