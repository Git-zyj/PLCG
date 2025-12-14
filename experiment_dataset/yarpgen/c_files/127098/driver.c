#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)7;
unsigned int var_6 = 2936480206U;
int var_8 = -1514414563;
signed char var_11 = (signed char)54;
long long int var_12 = -3796768791412157233LL;
signed char var_13 = (signed char)95;
int zero = 0;
unsigned char var_14 = (unsigned char)217;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)33255;
unsigned int var_17 = 2709572124U;
void init() {
}

void checksum() {
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
