#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)30094;
int var_5 = 449711375;
int var_12 = 1043544565;
int zero = 0;
unsigned long long int var_13 = 9865236886924128257ULL;
unsigned char var_14 = (unsigned char)203;
int var_15 = 525841749;
short var_16 = (short)-3619;
short var_17 = (short)-6440;
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
