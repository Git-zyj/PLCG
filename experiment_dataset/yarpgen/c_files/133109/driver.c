#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17977;
unsigned char var_3 = (unsigned char)171;
unsigned short var_4 = (unsigned short)37466;
unsigned char var_5 = (unsigned char)28;
unsigned long long int var_6 = 16761493778088684304ULL;
signed char var_7 = (signed char)63;
short var_9 = (short)-941;
unsigned char var_10 = (unsigned char)193;
unsigned char var_11 = (unsigned char)79;
unsigned int var_12 = 3680956875U;
int zero = 0;
signed char var_13 = (signed char)-59;
unsigned char var_14 = (unsigned char)107;
unsigned short var_15 = (unsigned short)41978;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 7778879552084634765ULL;
unsigned int var_18 = 2939847302U;
unsigned int var_19 = 2231719915U;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1054211356U;
unsigned int var_22 = 1368097523U;
unsigned long long int var_23 = 6827499461224623911ULL;
unsigned int var_24 = 3454716475U;
unsigned char var_25 = (unsigned char)126;
unsigned char var_26 = (unsigned char)125;
unsigned int var_27 = 1352819617U;
_Bool var_28 = (_Bool)0;
unsigned int var_29 = 292922322U;
signed char var_30 = (signed char)-118;
unsigned char var_31 = (unsigned char)70;
unsigned int var_32 = 1021594364U;
signed char arr_0 [23] ;
_Bool arr_2 [23] ;
signed char arr_3 [23] ;
signed char arr_6 [23] [23] [23] [23] ;
unsigned short arr_8 [23] [23] ;
_Bool arr_10 [23] [23] ;
signed char arr_13 [23] [23] [23] [23] ;
short arr_20 [23] [23] [23] [23] [23] [23] ;
unsigned int arr_21 [23] ;
unsigned char arr_34 [24] [24] ;
unsigned char arr_12 [23] [23] ;
unsigned int arr_17 [23] [23] ;
unsigned char arr_22 [23] [23] [23] [23] ;
unsigned int arr_29 [23] [23] [23] [23] [23] [23] ;
unsigned long long int arr_35 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)55065;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)16452;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = 78621666U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_34 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)253 : (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? 2055984020U : 3092297717U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 72322012U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? 16951799517959349524ULL : 7363280037783944996ULL;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
