#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)200;
unsigned short var_3 = (unsigned short)21153;
unsigned int var_6 = 2673439267U;
long long int var_7 = -5235833432026787651LL;
int var_8 = 1152460093;
int zero = 0;
unsigned short var_10 = (unsigned short)35026;
unsigned int var_11 = 3896046376U;
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
