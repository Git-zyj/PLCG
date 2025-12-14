#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4255209853576002384LL;
unsigned int var_7 = 263902525U;
short var_12 = (short)15073;
int zero = 0;
short var_14 = (short)32625;
unsigned int var_15 = 4082898578U;
unsigned char var_16 = (unsigned char)185;
void init() {
}

void checksum() {
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
