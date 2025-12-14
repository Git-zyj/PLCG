#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2822012217U;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 27812596U;
unsigned char var_11 = (unsigned char)250;
unsigned int var_13 = 3585522120U;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)58503;
short var_18 = (short)20853;
unsigned char var_19 = (unsigned char)114;
unsigned int var_20 = 2458983772U;
short var_21 = (short)15688;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
