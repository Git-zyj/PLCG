#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 713208088;
int var_1 = 418969537;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)171;
unsigned short var_7 = (unsigned short)43665;
int var_8 = -1050616909;
unsigned int var_12 = 1086325617U;
int zero = 0;
unsigned char var_14 = (unsigned char)124;
unsigned char var_15 = (unsigned char)75;
unsigned short var_16 = (unsigned short)11027;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
