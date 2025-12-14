#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2228371028U;
unsigned int var_2 = 737555924U;
int var_3 = 261221361;
short var_8 = (short)4778;
unsigned short var_10 = (unsigned short)10773;
long long int var_12 = 6053919702306092407LL;
unsigned char var_13 = (unsigned char)24;
long long int var_14 = -4879465919949686560LL;
int zero = 0;
unsigned char var_15 = (unsigned char)205;
short var_16 = (short)13145;
unsigned int var_17 = 62461223U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
