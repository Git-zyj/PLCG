#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)96;
signed char var_1 = (signed char)16;
long long int var_3 = 2058008516432159361LL;
signed char var_4 = (signed char)19;
short var_6 = (short)13835;
unsigned char var_7 = (unsigned char)186;
int var_8 = 718247524;
signed char var_9 = (signed char)-93;
signed char var_10 = (signed char)-101;
unsigned char var_11 = (unsigned char)254;
int var_12 = 2067752604;
unsigned short var_13 = (unsigned short)62103;
short var_14 = (short)12845;
int zero = 0;
unsigned long long int var_15 = 2101972748767238137ULL;
long long int var_16 = 2995085027508441380LL;
_Bool var_17 = (_Bool)1;
long long int var_18 = 4387766057854852245LL;
unsigned int var_19 = 3331430261U;
int var_20 = -1095553295;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 7232548064388664475ULL;
short var_23 = (short)-27329;
_Bool var_24 = (_Bool)1;
long long int var_25 = -20879351166919982LL;
short var_26 = (short)-6718;
unsigned short var_27 = (unsigned short)56767;
unsigned int var_28 = 596707661U;
int var_29 = 1414056421;
signed char var_30 = (signed char)-36;
unsigned short arr_0 [21] ;
short arr_1 [21] ;
unsigned char arr_2 [21] ;
int arr_3 [21] [21] ;
short arr_5 [21] [21] [21] ;
unsigned short arr_6 [21] ;
unsigned long long int arr_7 [21] ;
short arr_10 [12] ;
int arr_14 [12] ;
signed char arr_15 [12] ;
_Bool arr_18 [12] ;
_Bool arr_23 [12] [12] [12] ;
long long int arr_9 [21] ;
short arr_12 [12] ;
unsigned char arr_13 [12] ;
short arr_16 [12] ;
short arr_24 [12] [12] ;
_Bool arr_25 [12] ;
_Bool arr_28 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)57410;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-4861;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = -1924440868;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-3052;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)1892;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 3717814567033098936ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (short)-22761;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = -26514617;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (signed char)-31;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 4858704400297710520LL : -4720656896906311572LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (short)5384;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (short)-3947;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)17549 : (short)-16791;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_28 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
