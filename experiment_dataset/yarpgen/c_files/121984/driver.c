#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)178;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)51298;
signed char var_12 = (signed char)106;
short var_13 = (short)24993;
unsigned char var_15 = (unsigned char)86;
signed char var_17 = (signed char)-20;
unsigned char var_18 = (unsigned char)98;
int zero = 0;
short var_19 = (short)10680;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
