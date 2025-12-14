#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)158;
unsigned short var_6 = (unsigned short)2394;
unsigned int var_8 = 3961160399U;
int zero = 0;
long long int var_10 = 188364349831130785LL;
int var_11 = -484829408;
unsigned short var_12 = (unsigned short)12441;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
