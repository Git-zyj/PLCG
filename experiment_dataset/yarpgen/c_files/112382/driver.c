#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -875508539;
short var_3 = (short)-28762;
unsigned char var_5 = (unsigned char)159;
unsigned char var_9 = (unsigned char)210;
int zero = 0;
unsigned char var_13 = (unsigned char)251;
short var_14 = (short)-11485;
unsigned int var_15 = 393102143U;
unsigned char var_16 = (unsigned char)56;
void init() {
}

void checksum() {
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
