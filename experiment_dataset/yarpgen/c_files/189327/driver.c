#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)101;
_Bool var_3 = (_Bool)0;
unsigned short var_7 = (unsigned short)60790;
unsigned int var_9 = 264453394U;
signed char var_10 = (signed char)-81;
unsigned short var_11 = (unsigned short)14958;
int zero = 0;
int var_12 = 1381856221;
unsigned int var_13 = 2153753654U;
signed char var_14 = (signed char)-99;
void init() {
}

void checksum() {
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
