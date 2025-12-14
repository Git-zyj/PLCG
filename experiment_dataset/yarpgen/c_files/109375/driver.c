#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11643;
_Bool var_1 = (_Bool)1;
unsigned long long int var_6 = 4428377510397649486ULL;
short var_8 = (short)6117;
int zero = 0;
unsigned int var_12 = 2485534745U;
unsigned short var_13 = (unsigned short)24085;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
