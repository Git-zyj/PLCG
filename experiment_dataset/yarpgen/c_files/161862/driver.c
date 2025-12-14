#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9731;
_Bool var_3 = (_Bool)1;
unsigned int var_8 = 2578151290U;
short var_9 = (short)-12922;
int zero = 0;
int var_11 = -826331853;
unsigned char var_12 = (unsigned char)158;
short var_13 = (short)-23330;
long long int var_14 = -4132634376059639010LL;
void init() {
}

void checksum() {
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
