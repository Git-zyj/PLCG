#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29150;
short var_6 = (short)-11509;
unsigned char var_12 = (unsigned char)6;
int zero = 0;
unsigned int var_14 = 2360747329U;
unsigned int var_15 = 1389999042U;
unsigned short var_16 = (unsigned short)10933;
short var_17 = (short)18812;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
