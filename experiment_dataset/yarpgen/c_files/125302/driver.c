#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)77;
unsigned char var_7 = (unsigned char)82;
unsigned char var_8 = (unsigned char)201;
unsigned short var_10 = (unsigned short)54596;
int zero = 0;
short var_14 = (short)-27235;
short var_15 = (short)1187;
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
