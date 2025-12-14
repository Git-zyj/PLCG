#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)6155;
unsigned char var_15 = (unsigned char)198;
unsigned int var_16 = 1455999366U;
int zero = 0;
unsigned short var_20 = (unsigned short)38453;
unsigned char var_21 = (unsigned char)138;
short var_22 = (short)23082;
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
