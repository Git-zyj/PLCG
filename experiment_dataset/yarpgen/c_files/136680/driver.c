#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1647319522;
unsigned char var_9 = (unsigned char)161;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int var_13 = -283348778;
unsigned int var_14 = 2136733503U;
unsigned short var_16 = (unsigned short)58655;
int zero = 0;
unsigned long long int var_18 = 15399215655884023474ULL;
int var_19 = 319761202;
int var_20 = -1682185991;
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
