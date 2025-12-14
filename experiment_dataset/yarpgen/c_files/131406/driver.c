#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4008623081U;
unsigned short var_13 = (unsigned short)38791;
unsigned int var_17 = 387612449U;
int zero = 0;
unsigned int var_20 = 2223597948U;
unsigned int var_21 = 2246883903U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
