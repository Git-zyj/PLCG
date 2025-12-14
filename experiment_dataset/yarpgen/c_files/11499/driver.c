#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)6;
unsigned char var_5 = (unsigned char)30;
signed char var_11 = (signed char)4;
short var_12 = (short)-28427;
int zero = 0;
unsigned char var_19 = (unsigned char)72;
signed char var_20 = (signed char)65;
unsigned short var_21 = (unsigned short)28085;
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
