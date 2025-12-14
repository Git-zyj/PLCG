#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 2949735057U;
unsigned int var_12 = 518903907U;
unsigned short var_16 = (unsigned short)193;
int zero = 0;
unsigned char var_20 = (unsigned char)8;
unsigned int var_21 = 3001021361U;
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
