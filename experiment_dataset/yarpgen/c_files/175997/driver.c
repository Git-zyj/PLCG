#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)246;
unsigned int var_1 = 453624698U;
unsigned char var_2 = (unsigned char)212;
unsigned int var_4 = 239436047U;
short var_6 = (short)-26612;
unsigned int var_11 = 2575646170U;
unsigned short var_13 = (unsigned short)13303;
int var_14 = -942669980;
int zero = 0;
long long int var_18 = 2322965488496498438LL;
unsigned int var_19 = 973775447U;
unsigned char var_20 = (unsigned char)78;
short var_21 = (short)-22212;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
