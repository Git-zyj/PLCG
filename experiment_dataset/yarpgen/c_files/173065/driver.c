#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3642882939U;
unsigned short var_3 = (unsigned short)42752;
unsigned short var_4 = (unsigned short)43224;
unsigned short var_5 = (unsigned short)2278;
unsigned short var_7 = (unsigned short)25133;
unsigned short var_9 = (unsigned short)18731;
unsigned int var_11 = 955803560U;
int zero = 0;
unsigned int var_12 = 512961582U;
unsigned short var_13 = (unsigned short)36045;
unsigned short var_14 = (unsigned short)4060;
unsigned int var_15 = 953406202U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
