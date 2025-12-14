#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10499;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2095575163U;
short var_4 = (short)-14750;
unsigned short var_6 = (unsigned short)48433;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)214;
short var_11 = (short)17074;
short var_12 = (short)15190;
int zero = 0;
unsigned char var_13 = (unsigned char)160;
unsigned char var_14 = (unsigned char)253;
unsigned char var_15 = (unsigned char)169;
unsigned short var_16 = (unsigned short)26956;
unsigned char var_17 = (unsigned char)122;
unsigned char var_18 = (unsigned char)169;
_Bool var_19 = (_Bool)1;
int var_20 = 1934668490;
unsigned char var_21 = (unsigned char)89;
_Bool arr_2 [14] [14] ;
int arr_3 [22] [22] ;
int arr_4 [22] ;
unsigned short arr_5 [22] ;
int arr_6 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 1882937100;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -1992811417;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)51243;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 1477914899;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
