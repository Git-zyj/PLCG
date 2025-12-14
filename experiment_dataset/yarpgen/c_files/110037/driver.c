#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)3294;
unsigned short var_14 = (unsigned short)1053;
unsigned short var_15 = (unsigned short)20994;
unsigned short var_16 = (unsigned short)43441;
int zero = 0;
unsigned short var_17 = (unsigned short)21814;
unsigned short var_18 = (unsigned short)5893;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
