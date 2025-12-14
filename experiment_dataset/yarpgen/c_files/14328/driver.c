#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned short var_7 = (unsigned short)5253;
unsigned int var_11 = 2725146454U;
unsigned short var_14 = (unsigned short)15979;
signed char var_15 = (signed char)-36;
int zero = 0;
signed char var_18 = (signed char)65;
unsigned short var_19 = (unsigned short)16784;
unsigned short var_20 = (unsigned short)20907;
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
