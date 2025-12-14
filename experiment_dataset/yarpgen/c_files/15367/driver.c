#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24427;
signed char var_1 = (signed char)22;
unsigned long long int var_3 = 18234616050692807342ULL;
signed char var_5 = (signed char)24;
long long int var_6 = -2238865973802177444LL;
unsigned char var_7 = (unsigned char)207;
short var_8 = (short)-681;
short var_9 = (short)24595;
unsigned char var_11 = (unsigned char)88;
int zero = 0;
unsigned char var_13 = (unsigned char)18;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-105;
int var_16 = -1237486539;
unsigned char var_17 = (unsigned char)5;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-107;
unsigned short arr_1 [20] ;
int arr_3 [25] ;
signed char arr_4 [25] ;
unsigned long long int arr_7 [11] [11] ;
unsigned int arr_13 [11] [11] [11] ;
long long int arr_2 [20] [20] ;
long long int arr_5 [25] ;
signed char arr_9 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)62448;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1317262564 : 20119189;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = 7816261194748260737ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 564370209U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 5205586651958291782LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1421824310892126226LL : 3996127963227010382LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (signed char)-69;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
