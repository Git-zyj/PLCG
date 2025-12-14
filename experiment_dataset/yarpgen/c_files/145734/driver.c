#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 221289435;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-48;
unsigned short var_7 = (unsigned short)44778;
unsigned char var_10 = (unsigned char)31;
int zero = 0;
int var_11 = 1466356078;
unsigned short var_12 = (unsigned short)28796;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
