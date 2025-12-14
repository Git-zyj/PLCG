#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 259346489;
unsigned short var_5 = (unsigned short)5538;
unsigned short var_9 = (unsigned short)29953;
unsigned char var_11 = (unsigned char)145;
int zero = 0;
unsigned char var_14 = (unsigned char)118;
short var_15 = (short)-4462;
unsigned short var_16 = (unsigned short)64817;
signed char var_17 = (signed char)-6;
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
