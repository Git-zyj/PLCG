#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)84;
signed char var_7 = (signed char)-93;
int var_8 = 1433804250;
signed char var_10 = (signed char)17;
unsigned short var_12 = (unsigned short)60751;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 501129480U;
signed char var_17 = (signed char)-12;
unsigned short var_18 = (unsigned short)47065;
int zero = 0;
unsigned int var_19 = 2550852860U;
signed char var_20 = (signed char)107;
unsigned short var_21 = (unsigned short)29410;
signed char var_22 = (signed char)-82;
signed char var_23 = (signed char)30;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
