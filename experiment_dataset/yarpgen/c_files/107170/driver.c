#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6042491680125089007LL;
short var_3 = (short)21409;
int var_4 = -842895569;
unsigned char var_5 = (unsigned char)14;
short var_6 = (short)-8656;
unsigned char var_7 = (unsigned char)145;
int zero = 0;
unsigned short var_10 = (unsigned short)18484;
unsigned int var_11 = 539061250U;
int var_12 = 64217912;
signed char var_13 = (signed char)35;
signed char var_14 = (signed char)89;
unsigned char var_15 = (unsigned char)44;
unsigned int var_16 = 3776452908U;
unsigned int arr_1 [16] ;
unsigned char arr_6 [20] ;
unsigned short arr_9 [20] ;
unsigned int arr_10 [20] ;
unsigned int arr_11 [20] [20] ;
unsigned short arr_14 [20] ;
short arr_16 [20] ;
unsigned short arr_8 [20] ;
_Bool arr_12 [20] ;
unsigned char arr_17 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 2983561958U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)112 : (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (unsigned short)63847;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = 1513212427U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 2834076735U : 2673111159U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (unsigned short)39146;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = (short)10617;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)36707 : (unsigned short)57201;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = (unsigned char)227;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
