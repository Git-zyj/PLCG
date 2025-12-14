#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56681;
unsigned int var_1 = 2663602729U;
short var_2 = (short)4836;
unsigned int var_3 = 4155719700U;
long long int var_4 = 8311225844977271962LL;
unsigned char var_7 = (unsigned char)76;
long long int var_8 = 1411565395342368182LL;
unsigned char var_9 = (unsigned char)124;
int zero = 0;
unsigned char var_10 = (unsigned char)234;
unsigned short var_11 = (unsigned short)20896;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
