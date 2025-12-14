#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)255;
signed char var_2 = (signed char)-40;
int var_4 = 1408010727;
unsigned char var_5 = (unsigned char)78;
short var_7 = (short)-37;
unsigned long long int var_11 = 8757512088425043827ULL;
unsigned char var_13 = (unsigned char)201;
int zero = 0;
int var_15 = 256629488;
unsigned int var_16 = 3298975725U;
void init() {
}

void checksum() {
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
