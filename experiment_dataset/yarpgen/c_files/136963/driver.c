#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)158;
unsigned char var_4 = (unsigned char)86;
unsigned long long int var_6 = 8903228479644368668ULL;
unsigned char var_7 = (unsigned char)4;
unsigned long long int var_8 = 3301198359520668912ULL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-13140;
int zero = 0;
unsigned char var_12 = (unsigned char)203;
unsigned char var_13 = (unsigned char)254;
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
