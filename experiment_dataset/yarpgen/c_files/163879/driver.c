#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)111;
unsigned char var_1 = (unsigned char)48;
short var_3 = (short)25354;
short var_4 = (short)-5782;
unsigned short var_7 = (unsigned short)26256;
short var_8 = (short)-30829;
short var_9 = (short)-22861;
int zero = 0;
unsigned short var_10 = (unsigned short)47530;
short var_11 = (short)-13820;
short var_12 = (short)7081;
short var_13 = (short)-14630;
unsigned short var_14 = (unsigned short)23920;
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
