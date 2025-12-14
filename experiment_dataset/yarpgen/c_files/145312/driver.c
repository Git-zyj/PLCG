#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)87;
int var_1 = -512160844;
unsigned char var_3 = (unsigned char)153;
unsigned int var_5 = 3013856729U;
int var_7 = -210439755;
short var_8 = (short)-11129;
unsigned short var_10 = (unsigned short)53523;
int zero = 0;
int var_15 = 1406272814;
int var_16 = 324364409;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
