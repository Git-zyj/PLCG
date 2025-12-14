#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)253;
unsigned short var_6 = (unsigned short)48933;
unsigned char var_7 = (unsigned char)149;
long long int var_10 = 4229641659506409396LL;
int zero = 0;
long long int var_13 = -6176245296050807709LL;
long long int var_14 = -1164393931535319428LL;
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
