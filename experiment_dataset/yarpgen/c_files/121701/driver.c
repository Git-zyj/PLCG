#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
unsigned char var_1 = (unsigned char)157;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 18429805467407148946ULL;
unsigned char var_5 = (unsigned char)188;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)97;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 7169409611618519983ULL;
unsigned short var_13 = (unsigned short)22599;
long long int var_14 = 1025832488946044711LL;
long long int var_15 = 7918155018778472820LL;
signed char var_16 = (signed char)-45;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)41973;
_Bool arr_0 [11] ;
short arr_1 [11] [11] ;
short arr_2 [11] ;
int arr_3 [11] ;
unsigned short arr_6 [11] ;
long long int arr_9 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-6646;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)-6365;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 1363673578;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned short)29221;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = 3827041949522267783LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
