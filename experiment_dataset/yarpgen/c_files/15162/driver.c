#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12646;
unsigned short var_3 = (unsigned short)56100;
int var_6 = -1051211200;
long long int var_7 = 6117463168642046374LL;
unsigned int var_8 = 403690922U;
int zero = 0;
unsigned char var_12 = (unsigned char)190;
unsigned int var_13 = 3459676139U;
unsigned long long int var_14 = 8462283839492239529ULL;
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
