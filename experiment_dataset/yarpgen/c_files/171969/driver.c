#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)183;
unsigned char var_4 = (unsigned char)50;
short var_6 = (short)-12900;
unsigned char var_13 = (unsigned char)33;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)-29;
unsigned char var_16 = (unsigned char)134;
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
