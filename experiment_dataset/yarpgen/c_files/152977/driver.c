#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)38;
unsigned int var_3 = 3217793728U;
short var_6 = (short)-21486;
unsigned char var_7 = (unsigned char)74;
int zero = 0;
short var_18 = (short)-30429;
long long int var_19 = -6392481355403594021LL;
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
