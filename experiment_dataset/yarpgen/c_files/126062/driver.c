#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)32349;
unsigned char var_3 = (unsigned char)177;
unsigned char var_4 = (unsigned char)31;
unsigned int var_7 = 1688965785U;
unsigned short var_8 = (unsigned short)24793;
unsigned int var_9 = 3985180307U;
int zero = 0;
unsigned int var_11 = 2880523053U;
unsigned int var_12 = 2183005994U;
short var_13 = (short)-31105;
unsigned short var_14 = (unsigned short)55357;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
