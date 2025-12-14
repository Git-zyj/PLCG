#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4184132246U;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2187261365U;
unsigned long long int var_4 = 15272322768397775309ULL;
int var_5 = 1401121870;
_Bool var_10 = (_Bool)1;
signed char var_14 = (signed char)-122;
int zero = 0;
unsigned long long int var_15 = 16417839949132440600ULL;
int var_16 = -584591603;
signed char var_17 = (signed char)55;
int var_18 = 1976776345;
unsigned short var_19 = (unsigned short)52780;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
