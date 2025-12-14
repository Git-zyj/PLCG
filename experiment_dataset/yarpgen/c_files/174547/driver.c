#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 649730113U;
int var_4 = -1188013845;
unsigned short var_6 = (unsigned short)50454;
unsigned char var_7 = (unsigned char)148;
unsigned int var_9 = 1821584693U;
_Bool var_10 = (_Bool)1;
unsigned char var_14 = (unsigned char)11;
int var_17 = -1657441726;
int zero = 0;
unsigned short var_20 = (unsigned short)38052;
_Bool var_21 = (_Bool)1;
int var_22 = 1018033227;
unsigned int var_23 = 2248029674U;
_Bool var_24 = (_Bool)0;
int var_25 = -217686508;
unsigned short var_26 = (unsigned short)18636;
unsigned char arr_0 [12] ;
unsigned char arr_2 [12] [12] ;
_Bool arr_3 [12] ;
unsigned short arr_6 [24] ;
unsigned char arr_4 [12] ;
int arr_5 [12] ;
int arr_9 [24] [24] ;
int arr_10 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)16324 : (unsigned short)45338;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 140554937;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 1943510964 : 265280443;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -1132239473 : -1309777468;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
