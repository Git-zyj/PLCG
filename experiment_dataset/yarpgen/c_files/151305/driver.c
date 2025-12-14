#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)36;
short var_6 = (short)24342;
unsigned short var_7 = (unsigned short)49066;
int var_8 = -1598243635;
int var_9 = 1499303436;
short var_10 = (short)-23094;
unsigned short var_11 = (unsigned short)38213;
unsigned char var_14 = (unsigned char)237;
int zero = 0;
unsigned int var_20 = 611126885U;
short var_21 = (short)1478;
long long int var_22 = -3412923714457154261LL;
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
