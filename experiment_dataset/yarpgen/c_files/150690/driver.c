#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1355976464;
unsigned char var_3 = (unsigned char)93;
unsigned short var_4 = (unsigned short)5533;
int zero = 0;
unsigned char var_16 = (unsigned char)99;
long long int var_17 = -6767867651841902320LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
