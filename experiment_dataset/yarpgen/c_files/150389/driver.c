#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-53;
unsigned int var_3 = 24558935U;
unsigned short var_11 = (unsigned short)56212;
int zero = 0;
unsigned int var_14 = 217389786U;
unsigned short var_15 = (unsigned short)8786;
long long int var_16 = -2668400744804071664LL;
unsigned short var_17 = (unsigned short)18864;
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
