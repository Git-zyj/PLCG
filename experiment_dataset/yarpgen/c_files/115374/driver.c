#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3631062351U;
unsigned char var_3 = (unsigned char)250;
_Bool var_4 = (_Bool)0;
int var_7 = -826332090;
unsigned short var_8 = (unsigned short)13597;
int var_10 = 341437268;
unsigned short var_11 = (unsigned short)8651;
int var_17 = 1510769978;
int zero = 0;
int var_18 = 1908012936;
signed char var_19 = (signed char)-87;
unsigned int var_20 = 2696609571U;
void init() {
}

void checksum() {
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
