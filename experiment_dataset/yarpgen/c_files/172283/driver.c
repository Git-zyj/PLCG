#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)60;
unsigned char var_1 = (unsigned char)126;
signed char var_2 = (signed char)5;
short var_3 = (short)-23582;
unsigned short var_4 = (unsigned short)15877;
long long int var_5 = 6924241292069274573LL;
int var_6 = -573941792;
int zero = 0;
short var_10 = (short)-13063;
unsigned short var_11 = (unsigned short)31335;
short var_12 = (short)-21998;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
