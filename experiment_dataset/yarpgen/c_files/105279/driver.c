#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_12 = -1120398995;
unsigned char var_13 = (unsigned char)28;
unsigned int var_14 = 3496976163U;
int zero = 0;
unsigned char var_20 = (unsigned char)92;
unsigned short var_21 = (unsigned short)60827;
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
