#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24051;
int var_6 = -164039990;
unsigned char var_13 = (unsigned char)138;
int zero = 0;
int var_20 = -2020723093;
short var_21 = (short)20609;
unsigned short var_22 = (unsigned short)50671;
short var_23 = (short)-32323;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
