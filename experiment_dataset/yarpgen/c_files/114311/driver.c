#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)205;
unsigned int var_7 = 3135672677U;
unsigned int var_8 = 3725705203U;
_Bool var_10 = (_Bool)0;
int var_11 = -113698652;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)242;
unsigned char var_14 = (unsigned char)255;
signed char var_15 = (signed char)-124;
unsigned char var_18 = (unsigned char)46;
int zero = 0;
unsigned short var_19 = (unsigned short)33402;
unsigned long long int var_20 = 1063139722527387102ULL;
int var_21 = -1120767791;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
