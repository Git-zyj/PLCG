#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 5268266691220913862ULL;
unsigned char var_2 = (unsigned char)179;
signed char var_3 = (signed char)-26;
unsigned long long int var_7 = 17977937956388753070ULL;
unsigned short var_9 = (unsigned short)6738;
unsigned int var_12 = 316857801U;
unsigned short var_14 = (unsigned short)20805;
unsigned long long int var_16 = 4240752999136235874ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)44;
signed char var_19 = (signed char)-91;
int var_20 = -1701313685;
unsigned int var_21 = 3495357318U;
unsigned short var_22 = (unsigned short)49491;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
