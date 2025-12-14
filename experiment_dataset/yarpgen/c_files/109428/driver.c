#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)170;
int var_6 = 363046904;
unsigned int var_10 = 2825976866U;
unsigned short var_11 = (unsigned short)54183;
unsigned long long int var_15 = 13111835468135036115ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)92;
unsigned char var_20 = (unsigned char)101;
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
