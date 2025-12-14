#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19949;
short var_1 = (short)-28704;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)21127;
unsigned short var_4 = (unsigned short)26637;
long long int var_6 = -4561065085629222927LL;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-27495;
int zero = 0;
short var_10 = (short)8745;
unsigned short var_11 = (unsigned short)43288;
int var_12 = -367150175;
short var_13 = (short)-5999;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
