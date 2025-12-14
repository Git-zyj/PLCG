#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -832364995;
int var_2 = 1420720574;
unsigned long long int var_4 = 12166719295395023451ULL;
unsigned int var_6 = 3549410357U;
unsigned int var_7 = 545469647U;
unsigned int var_8 = 383444811U;
int zero = 0;
unsigned short var_10 = (unsigned short)41510;
unsigned char var_11 = (unsigned char)99;
unsigned short var_12 = (unsigned short)58064;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
