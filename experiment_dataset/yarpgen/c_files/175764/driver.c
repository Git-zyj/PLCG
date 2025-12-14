#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)871;
unsigned char var_1 = (unsigned char)52;
unsigned short var_2 = (unsigned short)36686;
unsigned char var_3 = (unsigned char)192;
short var_5 = (short)27844;
unsigned char var_7 = (unsigned char)71;
unsigned short var_9 = (unsigned short)23950;
short var_10 = (short)12276;
int zero = 0;
unsigned short var_12 = (unsigned short)48461;
unsigned int var_13 = 4246442244U;
int var_14 = 1889078449;
void init() {
}

void checksum() {
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
