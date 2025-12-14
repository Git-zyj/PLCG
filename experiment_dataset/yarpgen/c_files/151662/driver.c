#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16009615145084885693ULL;
unsigned short var_6 = (unsigned short)39576;
int var_7 = -713569004;
int var_8 = -574986763;
int zero = 0;
short var_10 = (short)-32717;
unsigned int var_11 = 546056621U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
