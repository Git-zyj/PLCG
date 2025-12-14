#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 704163190U;
short var_4 = (short)-23109;
unsigned long long int var_5 = 7216875654161275425ULL;
unsigned short var_7 = (unsigned short)58409;
unsigned long long int var_9 = 9718221508549151135ULL;
unsigned long long int var_13 = 17359228967279935519ULL;
int var_14 = 1141128257;
int var_15 = -509356579;
int zero = 0;
unsigned char var_17 = (unsigned char)62;
unsigned char var_18 = (unsigned char)152;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
