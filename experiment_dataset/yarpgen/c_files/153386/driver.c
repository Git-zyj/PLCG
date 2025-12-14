#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = -2082007768;
unsigned long long int var_7 = 16319637163947798741ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 26418275U;
unsigned short var_11 = (unsigned short)28968;
_Bool var_13 = (_Bool)0;
unsigned short var_16 = (unsigned short)10380;
int zero = 0;
unsigned int var_19 = 3442912141U;
unsigned char var_20 = (unsigned char)153;
unsigned short var_21 = (unsigned short)53059;
signed char var_22 = (signed char)-13;
unsigned int var_23 = 3691013658U;
unsigned int var_24 = 2742419185U;
short var_25 = (short)12706;
_Bool var_26 = (_Bool)0;
short var_27 = (short)-7575;
short arr_0 [24] ;
int arr_1 [24] ;
unsigned short arr_2 [24] ;
unsigned short arr_3 [16] ;
unsigned char arr_4 [16] ;
short arr_6 [12] ;
signed char arr_7 [12] ;
short arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)-11741;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -935839959;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)23820;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)16067;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)4 : (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (short)-285;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (short)25893;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
