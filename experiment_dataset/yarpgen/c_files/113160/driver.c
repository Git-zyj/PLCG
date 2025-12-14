#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)24;
int var_1 = -2041183317;
unsigned long long int var_3 = 14750884851656819148ULL;
long long int var_4 = 5417138324398258153LL;
unsigned short var_6 = (unsigned short)31654;
unsigned short var_11 = (unsigned short)53778;
int zero = 0;
unsigned long long int var_12 = 2181455331797469030ULL;
unsigned char var_13 = (unsigned char)34;
long long int var_14 = -9073916335200268803LL;
void init() {
}

void checksum() {
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
