#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1795238915;
long long int var_1 = -330435512915639093LL;
long long int var_6 = 4580735574673218465LL;
int var_7 = -801442701;
int var_8 = 1479468873;
int zero = 0;
unsigned long long int var_10 = 12171601734934827032ULL;
unsigned char var_11 = (unsigned char)178;
unsigned char var_12 = (unsigned char)230;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
