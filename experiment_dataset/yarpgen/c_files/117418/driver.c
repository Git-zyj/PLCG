#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-92;
unsigned short var_5 = (unsigned short)48496;
int var_8 = -268075789;
int zero = 0;
short var_10 = (short)32427;
unsigned short var_11 = (unsigned short)17962;
short var_12 = (short)-26838;
int var_13 = -759820114;
unsigned char var_14 = (unsigned char)13;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
