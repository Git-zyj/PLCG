#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)76;
short var_5 = (short)5967;
short var_7 = (short)19812;
unsigned short var_8 = (unsigned short)17806;
short var_12 = (short)14734;
int zero = 0;
unsigned short var_14 = (unsigned short)32283;
unsigned short var_15 = (unsigned short)8456;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
