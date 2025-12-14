#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18922;
signed char var_1 = (signed char)103;
unsigned char var_2 = (unsigned char)179;
unsigned char var_3 = (unsigned char)77;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)20665;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
short var_11 = (short)9209;
int var_12 = -1899525337;
unsigned int var_13 = 3347068635U;
unsigned char var_14 = (unsigned char)130;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)13304;
short var_17 = (short)-4052;
unsigned int var_18 = 233218743U;
short var_19 = (short)20581;
_Bool var_20 = (_Bool)1;
unsigned char arr_0 [12] ;
_Bool arr_1 [12] [12] ;
unsigned char arr_2 [11] ;
_Bool arr_3 [11] ;
_Bool arr_4 [11] ;
unsigned int arr_7 [20] ;
unsigned int arr_8 [20] ;
unsigned int arr_5 [11] ;
unsigned long long int arr_6 [11] ;
unsigned short arr_9 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 2536196364U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 1666290045U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 2672876564U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 8499249958948831046ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (unsigned short)10751;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
