#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11067;
int var_1 = 134523446;
unsigned short var_2 = (unsigned short)23556;
long long int var_4 = -1523806344651660747LL;
signed char var_6 = (signed char)-96;
unsigned short var_8 = (unsigned short)21124;
short var_12 = (short)9980;
unsigned char var_13 = (unsigned char)66;
short var_17 = (short)17576;
unsigned char var_19 = (unsigned char)9;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)50;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
