#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)2;
signed char var_4 = (signed char)-61;
unsigned short var_6 = (unsigned short)11875;
signed char var_7 = (signed char)-83;
signed char var_8 = (signed char)-56;
unsigned char var_10 = (unsigned char)209;
int var_12 = -812444866;
long long int var_13 = 3632373031633314639LL;
int var_14 = 1314172467;
short var_15 = (short)24067;
int zero = 0;
int var_16 = -1130348808;
signed char var_17 = (signed char)-61;
signed char var_18 = (signed char)-62;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
