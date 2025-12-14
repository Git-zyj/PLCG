#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)203;
short var_3 = (short)-32220;
long long int var_4 = 423493891210137300LL;
short var_6 = (short)-27176;
short var_8 = (short)-17000;
short var_11 = (short)-4916;
unsigned char var_12 = (unsigned char)63;
unsigned char var_14 = (unsigned char)4;
unsigned short var_15 = (unsigned short)32215;
unsigned char var_18 = (unsigned char)54;
int zero = 0;
unsigned long long int var_20 = 17726262692167261710ULL;
short var_21 = (short)-30558;
long long int var_22 = 5706123127760655440LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
