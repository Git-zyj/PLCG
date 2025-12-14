#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 15308650U;
short var_1 = (short)-8699;
long long int var_6 = 7383890884841080303LL;
unsigned int var_11 = 306048399U;
short var_12 = (short)-16656;
signed char var_14 = (signed char)38;
long long int var_15 = 7431394258107747411LL;
short var_16 = (short)-11441;
unsigned short var_17 = (unsigned short)29795;
int zero = 0;
unsigned char var_20 = (unsigned char)185;
_Bool var_21 = (_Bool)0;
long long int var_22 = 2130289025713456124LL;
unsigned char var_23 = (unsigned char)35;
unsigned char var_24 = (unsigned char)195;
short arr_1 [21] ;
long long int arr_2 [21] ;
unsigned short arr_3 [21] [21] [21] ;
short arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)742;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -6904605395269600774LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)59162;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (short)-27563;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
