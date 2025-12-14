#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 672277343;
unsigned char var_2 = (unsigned char)170;
unsigned char var_3 = (unsigned char)188;
short var_4 = (short)-8379;
unsigned short var_5 = (unsigned short)60631;
short var_8 = (short)-32554;
unsigned char var_9 = (unsigned char)243;
int zero = 0;
int var_10 = -66876040;
short var_11 = (short)12588;
unsigned char var_12 = (unsigned char)11;
unsigned char var_13 = (unsigned char)39;
unsigned int var_14 = 2466942427U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
