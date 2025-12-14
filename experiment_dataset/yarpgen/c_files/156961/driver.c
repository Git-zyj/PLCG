#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 539192357;
unsigned char var_3 = (unsigned char)120;
unsigned int var_6 = 3383098181U;
unsigned short var_10 = (unsigned short)28868;
unsigned char var_11 = (unsigned char)66;
int zero = 0;
short var_13 = (short)28315;
unsigned char var_14 = (unsigned char)237;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-12359;
unsigned short arr_0 [16] [16] ;
unsigned char arr_2 [16] ;
long long int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)16712;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -800274446360584177LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
