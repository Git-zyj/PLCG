#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)21833;
unsigned short var_7 = (unsigned short)34325;
short var_13 = (short)-20395;
short var_15 = (short)-17044;
int zero = 0;
short var_17 = (short)-17386;
unsigned char var_18 = (unsigned char)247;
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
