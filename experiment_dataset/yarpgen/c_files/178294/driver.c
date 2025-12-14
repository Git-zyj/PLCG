#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2689299774U;
unsigned short var_6 = (unsigned short)60488;
int var_7 = 216901858;
int var_9 = -1141981861;
short var_10 = (short)-7260;
short var_12 = (short)-40;
short var_14 = (short)-24172;
int zero = 0;
unsigned char var_15 = (unsigned char)228;
unsigned short var_16 = (unsigned short)58894;
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
