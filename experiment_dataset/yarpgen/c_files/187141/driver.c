#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24704;
unsigned char var_3 = (unsigned char)177;
unsigned long long int var_5 = 4501176206039828482ULL;
unsigned char var_6 = (unsigned char)46;
short var_7 = (short)-27352;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)55;
unsigned long long int var_15 = 5660999068297528951ULL;
unsigned long long int var_16 = 13829748781380877023ULL;
signed char var_17 = (signed char)17;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
