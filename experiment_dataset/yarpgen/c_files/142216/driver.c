#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -654513046;
_Bool var_6 = (_Bool)0;
unsigned int var_11 = 706487305U;
unsigned short var_12 = (unsigned short)42838;
int zero = 0;
unsigned int var_13 = 434036598U;
unsigned short var_14 = (unsigned short)47019;
short var_15 = (short)-2159;
signed char var_16 = (signed char)56;
unsigned char var_17 = (unsigned char)185;
short arr_1 [10] ;
unsigned short arr_12 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-17496;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (unsigned short)6967;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
