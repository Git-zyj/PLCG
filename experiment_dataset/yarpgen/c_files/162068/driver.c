#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23451;
int var_3 = -777910036;
unsigned int var_6 = 3191364917U;
unsigned char var_10 = (unsigned char)255;
int var_11 = 1226699399;
int zero = 0;
unsigned short var_14 = (unsigned short)10000;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-14;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
