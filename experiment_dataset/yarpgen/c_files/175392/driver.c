#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4064410172U;
unsigned char var_3 = (unsigned char)16;
int var_5 = 683194530;
unsigned int var_6 = 1341328935U;
unsigned int var_8 = 1673796964U;
int var_12 = 1984948720;
int zero = 0;
unsigned char var_16 = (unsigned char)195;
short var_17 = (short)8455;
long long int var_18 = -5070943915639045418LL;
unsigned char var_19 = (unsigned char)240;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
