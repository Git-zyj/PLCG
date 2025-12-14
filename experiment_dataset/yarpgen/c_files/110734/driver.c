#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8337;
int var_3 = -1388433813;
short var_6 = (short)26871;
short var_8 = (short)15070;
unsigned char var_10 = (unsigned char)84;
unsigned int var_12 = 2485708031U;
unsigned int var_13 = 800835177U;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)21;
unsigned int var_21 = 2774598860U;
short var_22 = (short)-18342;
unsigned char var_23 = (unsigned char)50;
signed char var_24 = (signed char)-98;
int arr_1 [21] [21] ;
int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = -368373661;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1054298392;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
