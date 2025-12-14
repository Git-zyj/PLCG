#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)225;
unsigned short var_8 = (unsigned short)35119;
unsigned int var_13 = 2768710646U;
unsigned char var_17 = (unsigned char)144;
int zero = 0;
unsigned char var_19 = (unsigned char)187;
short var_20 = (short)-3177;
unsigned char var_21 = (unsigned char)160;
void init() {
}

void checksum() {
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
