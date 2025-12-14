#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10469649966222124251ULL;
int var_2 = -930817546;
unsigned short var_3 = (unsigned short)16595;
short var_4 = (short)-19575;
int var_8 = -1782944789;
unsigned char var_10 = (unsigned char)215;
short var_15 = (short)12334;
signed char var_16 = (signed char)126;
int zero = 0;
unsigned char var_20 = (unsigned char)60;
unsigned char var_21 = (unsigned char)229;
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
