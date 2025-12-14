#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
unsigned int var_3 = 2804286549U;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)16338;
signed char var_6 = (signed char)-113;
_Bool var_8 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-60;
unsigned short var_18 = (unsigned short)30232;
unsigned int var_19 = 2831775243U;
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
