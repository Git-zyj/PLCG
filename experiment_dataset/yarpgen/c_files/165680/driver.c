#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3198759862816254300ULL;
short var_4 = (short)12352;
signed char var_5 = (signed char)11;
unsigned char var_7 = (unsigned char)77;
unsigned long long int var_8 = 8851380615376927752ULL;
signed char var_10 = (signed char)11;
int var_12 = 569357844;
int zero = 0;
unsigned char var_14 = (unsigned char)231;
int var_15 = -1598222664;
short var_16 = (short)-10999;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
