#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = -1657170216;
signed char var_4 = (signed char)21;
unsigned short var_6 = (unsigned short)56219;
signed char var_7 = (signed char)-61;
unsigned short var_8 = (unsigned short)60213;
signed char var_11 = (signed char)-83;
long long int var_13 = 4823263173743228494LL;
short var_15 = (short)6344;
unsigned int var_16 = 3490498375U;
unsigned short var_17 = (unsigned short)41795;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)1664;
unsigned int var_21 = 895890727U;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-83;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
