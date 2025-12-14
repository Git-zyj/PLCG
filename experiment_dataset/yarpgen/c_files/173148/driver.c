#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1920041942;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)138;
short var_4 = (short)-7354;
unsigned long long int var_5 = 2109609916143946659ULL;
unsigned char var_6 = (unsigned char)62;
unsigned long long int var_8 = 16213702208980641805ULL;
int zero = 0;
unsigned long long int var_10 = 14036182726760275011ULL;
signed char var_11 = (signed char)-66;
unsigned int var_12 = 1548667379U;
unsigned long long int var_13 = 2917478293609668641ULL;
unsigned short var_14 = (unsigned short)24739;
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
