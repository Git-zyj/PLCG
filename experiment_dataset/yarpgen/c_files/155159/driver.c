#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8948;
unsigned short var_6 = (unsigned short)4705;
unsigned char var_8 = (unsigned char)52;
unsigned short var_10 = (unsigned short)8757;
unsigned short var_14 = (unsigned short)34318;
short var_15 = (short)-17074;
int zero = 0;
unsigned long long int var_16 = 6313071084101554845ULL;
unsigned short var_17 = (unsigned short)55602;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
