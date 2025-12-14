#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -836734812;
short var_2 = (short)-24936;
_Bool var_8 = (_Bool)1;
signed char var_13 = (signed char)-70;
int zero = 0;
unsigned char var_14 = (unsigned char)242;
unsigned char var_15 = (unsigned char)149;
short var_16 = (short)-32000;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)117;
unsigned int var_19 = 379159536U;
unsigned char var_20 = (unsigned char)72;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
