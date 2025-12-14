#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)30277;
unsigned short var_4 = (unsigned short)7089;
int var_8 = -627299347;
int var_12 = 756046061;
int zero = 0;
int var_13 = -58766744;
unsigned short var_14 = (unsigned short)30388;
void init() {
}

void checksum() {
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
