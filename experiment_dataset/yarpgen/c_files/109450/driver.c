#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1992413406369388235LL;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)24;
unsigned long long int var_3 = 17244650400944313505ULL;
unsigned short var_4 = (unsigned short)32593;
unsigned short var_5 = (unsigned short)41297;
long long int var_6 = -767320786673645792LL;
signed char var_7 = (signed char)27;
short var_8 = (short)29829;
unsigned int var_9 = 4141895584U;
signed char var_10 = (signed char)-28;
int zero = 0;
unsigned long long int var_11 = 1244315489801063573ULL;
signed char var_12 = (signed char)102;
signed char var_13 = (signed char)-66;
unsigned long long int var_14 = 18113543099162343026ULL;
unsigned long long int var_15 = 9558407761482526981ULL;
int var_16 = -1510568663;
unsigned int var_17 = 4148488029U;
unsigned char var_18 = (unsigned char)176;
unsigned short var_19 = (unsigned short)36801;
signed char var_20 = (signed char)-60;
unsigned short var_21 = (unsigned short)18280;
unsigned int var_22 = 2865934940U;
int arr_4 [15] ;
_Bool arr_16 [23] [23] [23] [23] ;
unsigned short arr_17 [23] [23] ;
unsigned short arr_25 [15] ;
unsigned long long int arr_26 [15] [15] ;
short arr_30 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 1048877271;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned short)30523;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_25 [i_0] = (unsigned short)1292;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_26 [i_0] [i_1] = 18356278966402938545ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_30 [i_0] = (short)-7928;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
