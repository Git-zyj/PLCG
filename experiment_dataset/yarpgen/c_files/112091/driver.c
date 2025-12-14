#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)109;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)21987;
int var_4 = -1813452054;
short var_5 = (short)452;
long long int var_6 = 2115894092109150968LL;
unsigned char var_7 = (unsigned char)234;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)223;
int zero = 0;
unsigned char var_10 = (unsigned char)84;
unsigned long long int var_11 = 4801791176264987081ULL;
unsigned char var_12 = (unsigned char)162;
_Bool var_13 = (_Bool)0;
int var_14 = 832371908;
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
