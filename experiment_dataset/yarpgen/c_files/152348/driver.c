#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)237;
unsigned short var_6 = (unsigned short)60476;
unsigned char var_7 = (unsigned char)55;
short var_12 = (short)8363;
unsigned char var_17 = (unsigned char)56;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)5133;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)121;
signed char var_23 = (signed char)-40;
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
