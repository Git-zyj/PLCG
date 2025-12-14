#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 986015851;
unsigned int var_2 = 2041379440U;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)229;
unsigned int var_6 = 984199536U;
unsigned int var_8 = 1330739991U;
int zero = 0;
short var_10 = (short)12662;
unsigned int var_11 = 1211440928U;
unsigned short var_12 = (unsigned short)8366;
unsigned short var_13 = (unsigned short)63250;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
