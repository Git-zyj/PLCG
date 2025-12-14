#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)124;
_Bool var_4 = (_Bool)1;
short var_5 = (short)13006;
unsigned char var_6 = (unsigned char)137;
unsigned short var_11 = (unsigned short)41515;
unsigned char var_12 = (unsigned char)53;
unsigned char var_13 = (unsigned char)133;
unsigned int var_15 = 3720816219U;
short var_16 = (short)4312;
int zero = 0;
short var_17 = (short)-10925;
int var_18 = 747755049;
unsigned int var_19 = 730785215U;
unsigned short var_20 = (unsigned short)52374;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
