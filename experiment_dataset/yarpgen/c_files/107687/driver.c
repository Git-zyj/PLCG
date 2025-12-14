#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)33602;
unsigned short var_6 = (unsigned short)30528;
unsigned int var_7 = 3054969429U;
unsigned short var_8 = (unsigned short)58697;
unsigned int var_10 = 4224590699U;
int zero = 0;
unsigned int var_13 = 3242533487U;
unsigned short var_14 = (unsigned short)45237;
unsigned short var_15 = (unsigned short)35870;
unsigned short var_16 = (unsigned short)15030;
unsigned short var_17 = (unsigned short)23554;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
