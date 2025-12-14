#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)58734;
int var_5 = 1301109522;
unsigned int var_8 = 512384004U;
unsigned long long int var_16 = 9722977364570038716ULL;
int zero = 0;
unsigned int var_18 = 381481680U;
unsigned int var_19 = 552982448U;
int var_20 = -248216376;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
