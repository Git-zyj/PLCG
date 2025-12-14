#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1387508834;
unsigned int var_6 = 976260911U;
short var_7 = (short)-6189;
int var_10 = -2125998738;
_Bool var_12 = (_Bool)0;
unsigned char var_14 = (unsigned char)66;
int zero = 0;
unsigned short var_16 = (unsigned short)6151;
unsigned long long int var_17 = 9417891007320329735ULL;
unsigned long long int var_18 = 13285385752237601311ULL;
int var_19 = -259635697;
unsigned char var_20 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
