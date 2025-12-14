#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8787;
_Bool var_3 = (_Bool)1;
short var_6 = (short)-28392;
unsigned int var_12 = 424242343U;
int zero = 0;
unsigned short var_14 = (unsigned short)56274;
unsigned short var_15 = (unsigned short)5448;
_Bool var_16 = (_Bool)0;
int var_17 = -248212421;
unsigned char var_18 = (unsigned char)244;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
