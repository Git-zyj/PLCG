#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)29;
unsigned char var_1 = (unsigned char)142;
unsigned char var_4 = (unsigned char)23;
short var_6 = (short)-18861;
unsigned short var_10 = (unsigned short)29772;
signed char var_11 = (signed char)-68;
int zero = 0;
unsigned int var_12 = 4108817517U;
unsigned char var_13 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
