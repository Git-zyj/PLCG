#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)2;
unsigned char var_7 = (unsigned char)114;
_Bool var_9 = (_Bool)0;
unsigned char var_12 = (unsigned char)132;
unsigned char var_13 = (unsigned char)176;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)81;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)65;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
