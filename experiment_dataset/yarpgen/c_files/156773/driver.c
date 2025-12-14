#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 22207629;
unsigned char var_2 = (unsigned char)11;
short var_3 = (short)32012;
long long int var_6 = 197351085654421012LL;
_Bool var_7 = (_Bool)0;
int var_11 = 867140602;
long long int var_14 = 8596446871565770816LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)70;
int var_17 = 448791605;
void init() {
}

void checksum() {
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
