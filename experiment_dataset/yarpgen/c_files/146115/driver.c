#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)73;
unsigned char var_4 = (unsigned char)183;
_Bool var_5 = (_Bool)1;
short var_6 = (short)11466;
unsigned short var_7 = (unsigned short)31746;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)175;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)22102;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-3648;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
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
