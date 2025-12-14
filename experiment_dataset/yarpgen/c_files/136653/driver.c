#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)5938;
short var_7 = (short)-29916;
unsigned char var_13 = (unsigned char)240;
int zero = 0;
unsigned short var_17 = (unsigned short)16689;
unsigned short var_18 = (unsigned short)36727;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
