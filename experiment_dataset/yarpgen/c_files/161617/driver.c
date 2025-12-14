#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6842430587978813501LL;
unsigned int var_4 = 836435894U;
unsigned long long int var_8 = 3124283067657555759ULL;
unsigned char var_14 = (unsigned char)90;
unsigned short var_16 = (unsigned short)921;
int zero = 0;
unsigned char var_19 = (unsigned char)238;
unsigned short var_20 = (unsigned short)2711;
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
