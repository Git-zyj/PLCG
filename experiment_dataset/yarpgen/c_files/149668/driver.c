#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63954;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)50;
short var_5 = (short)16015;
unsigned int var_6 = 4215974626U;
int var_8 = 1280292564;
unsigned char var_9 = (unsigned char)20;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 601729484U;
unsigned char var_13 = (unsigned char)1;
int zero = 0;
unsigned short var_14 = (unsigned short)1527;
unsigned int var_15 = 2579854199U;
unsigned char var_16 = (unsigned char)102;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
