#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 342109562U;
unsigned int var_4 = 3293957503U;
unsigned char var_5 = (unsigned char)144;
unsigned short var_9 = (unsigned short)28;
int zero = 0;
short var_10 = (short)-16948;
int var_11 = 822207483;
unsigned long long int var_12 = 8068083377416138284ULL;
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
