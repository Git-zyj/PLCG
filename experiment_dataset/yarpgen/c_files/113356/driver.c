#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)210;
unsigned char var_3 = (unsigned char)163;
unsigned char var_6 = (unsigned char)54;
int zero = 0;
int var_10 = 94353738;
unsigned short var_11 = (unsigned short)35570;
unsigned long long int var_12 = 18133643881428463344ULL;
int var_13 = 603464993;
unsigned int var_14 = 2992513390U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
