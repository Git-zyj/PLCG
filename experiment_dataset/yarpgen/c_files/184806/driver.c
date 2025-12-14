#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)225;
unsigned char var_6 = (unsigned char)146;
unsigned char var_8 = (unsigned char)70;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned char var_16 = (unsigned char)179;
int zero = 0;
unsigned char var_17 = (unsigned char)81;
unsigned char var_18 = (unsigned char)96;
unsigned char var_19 = (unsigned char)8;
unsigned char var_20 = (unsigned char)126;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
