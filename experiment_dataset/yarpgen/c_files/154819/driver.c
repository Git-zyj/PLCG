#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)141;
long long int var_2 = -516547032036168185LL;
long long int var_4 = 5758959496044963117LL;
long long int var_5 = 2586618446376371849LL;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)40020;
short var_10 = (short)6194;
unsigned char var_11 = (unsigned char)4;
int var_13 = -1969862306;
long long int var_14 = -5129228125028550306LL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 1642471233323275159ULL;
unsigned short var_17 = (unsigned short)10714;
unsigned long long int var_19 = 15848869783708149784ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)136;
unsigned char var_21 = (unsigned char)65;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)4;
int var_24 = 1580120626;
unsigned long long int var_25 = 4257527364066957230ULL;
unsigned char var_26 = (unsigned char)235;
unsigned char arr_0 [13] ;
_Bool arr_1 [13] ;
int arr_4 [22] ;
unsigned long long int arr_8 [22] [22] [22] ;
unsigned char arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -1394786506;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 6010476630270524153ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)81;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
