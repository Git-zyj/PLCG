#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 2293609811677695629ULL;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)28961;
short var_7 = (short)32063;
unsigned long long int var_8 = 9134060993297560888ULL;
long long int var_9 = -3780727283501784434LL;
unsigned long long int var_10 = 6966182195577139402ULL;
int zero = 0;
unsigned int var_11 = 2880074906U;
unsigned long long int var_12 = 3279316265610542813ULL;
unsigned int var_13 = 701384528U;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)57995;
_Bool var_17 = (_Bool)0;
unsigned long long int arr_0 [15] ;
unsigned short arr_1 [15] ;
unsigned short arr_3 [25] ;
short arr_4 [25] ;
int arr_5 [25] ;
unsigned int arr_8 [12] ;
long long int arr_14 [12] [12] [12] ;
long long int arr_15 [12] [12] [12] [12] [12] ;
unsigned short arr_6 [25] [25] ;
unsigned char arr_18 [12] [12] [12] [12] ;
unsigned int arr_19 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 11046614511308168796ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)10548;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)44105;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)16424;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = -2082995408;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 2569334280U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -3844232647699790021LL : 5642515878518464403LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = 5065155782919300227LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)62844;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)15 : (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3773073095U : 192500157U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
