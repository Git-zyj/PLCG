#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)220;
unsigned long long int var_4 = 4873572140876863659ULL;
unsigned int var_5 = 1741169974U;
signed char var_8 = (signed char)-54;
unsigned char var_13 = (unsigned char)16;
unsigned short var_15 = (unsigned short)52450;
int zero = 0;
unsigned short var_16 = (unsigned short)37489;
unsigned char var_17 = (unsigned char)94;
void init() {
}

void checksum() {
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
