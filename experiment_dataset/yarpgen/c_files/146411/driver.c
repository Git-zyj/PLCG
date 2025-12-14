#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6657651266227891245ULL;
long long int var_3 = -1849806913108761246LL;
signed char var_5 = (signed char)-123;
short var_6 = (short)17395;
unsigned char var_7 = (unsigned char)4;
unsigned char var_9 = (unsigned char)154;
unsigned long long int var_10 = 5163469835905227559ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)232;
unsigned short var_12 = (unsigned short)29546;
unsigned int var_13 = 1016509012U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
