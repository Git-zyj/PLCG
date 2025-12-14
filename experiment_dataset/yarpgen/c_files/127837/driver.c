#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)4900;
unsigned short var_8 = (unsigned short)62759;
short var_12 = (short)-27835;
unsigned int var_15 = 483413136U;
int zero = 0;
unsigned int var_20 = 2260638401U;
unsigned char var_21 = (unsigned char)35;
void init() {
}

void checksum() {
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
