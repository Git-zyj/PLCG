#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3721481123U;
short var_4 = (short)-3521;
long long int var_5 = 223068434200933497LL;
unsigned short var_11 = (unsigned short)29246;
int zero = 0;
unsigned char var_19 = (unsigned char)146;
unsigned int var_20 = 1214351407U;
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
