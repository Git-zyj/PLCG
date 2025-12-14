#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)46952;
unsigned char var_3 = (unsigned char)110;
_Bool var_7 = (_Bool)0;
signed char var_10 = (signed char)64;
int var_12 = -1068598868;
long long int var_13 = -2049693384687393512LL;
int zero = 0;
long long int var_14 = 5134975202844701616LL;
unsigned short var_15 = (unsigned short)42805;
signed char var_16 = (signed char)-64;
unsigned int var_17 = 3820129263U;
void init() {
}

void checksum() {
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
