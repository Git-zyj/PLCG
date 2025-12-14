#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10968237842201357049ULL;
unsigned int var_1 = 3491515066U;
int var_2 = -1572918769;
int var_3 = 971195210;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-101;
int var_8 = -1463139439;
long long int var_10 = 6256567992389273751LL;
int zero = 0;
unsigned char var_13 = (unsigned char)148;
unsigned long long int var_14 = 1541823956780142687ULL;
long long int var_15 = -5519778878893400337LL;
long long int var_16 = -1043591505798609294LL;
unsigned short var_17 = (unsigned short)16173;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
