#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3078504950U;
short var_4 = (short)-8327;
int var_5 = 1222627679;
int var_6 = -2018097410;
long long int var_7 = -1748607473068670LL;
unsigned char var_9 = (unsigned char)53;
unsigned long long int var_10 = 14552547989574298874ULL;
unsigned char var_13 = (unsigned char)37;
int zero = 0;
short var_14 = (short)-27286;
unsigned short var_15 = (unsigned short)47140;
unsigned char var_16 = (unsigned char)78;
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
