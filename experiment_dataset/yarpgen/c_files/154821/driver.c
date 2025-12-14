#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 190858187U;
signed char var_5 = (signed char)-82;
int var_11 = -1057407110;
unsigned int var_16 = 4038729052U;
short var_17 = (short)23926;
int zero = 0;
unsigned short var_18 = (unsigned short)18453;
unsigned char var_19 = (unsigned char)143;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
