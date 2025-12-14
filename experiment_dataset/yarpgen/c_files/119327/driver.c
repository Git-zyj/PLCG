#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)20;
int var_2 = 108387200;
short var_3 = (short)20935;
int var_6 = -1494655020;
unsigned int var_7 = 3383775759U;
unsigned short var_8 = (unsigned short)53127;
unsigned long long int var_10 = 9116849703502835735ULL;
int zero = 0;
short var_12 = (short)-12224;
int var_13 = 2100383541;
unsigned char var_14 = (unsigned char)59;
short var_15 = (short)-12499;
unsigned int var_16 = 1445484640U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
