#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-8431;
signed char var_6 = (signed char)119;
unsigned char var_8 = (unsigned char)229;
int zero = 0;
unsigned long long int var_10 = 17042692293791733720ULL;
unsigned short var_11 = (unsigned short)947;
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
