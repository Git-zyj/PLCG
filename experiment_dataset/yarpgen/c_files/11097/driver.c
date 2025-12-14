#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)166;
unsigned short var_8 = (unsigned short)59699;
short var_11 = (short)2832;
unsigned short var_12 = (unsigned short)54377;
unsigned short var_18 = (unsigned short)16171;
int zero = 0;
unsigned char var_19 = (unsigned char)5;
unsigned short var_20 = (unsigned short)58963;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
