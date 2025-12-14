#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61384;
unsigned short var_1 = (unsigned short)61425;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 893083337U;
unsigned short var_5 = (unsigned short)10344;
unsigned short var_6 = (unsigned short)4590;
unsigned long long int var_7 = 9157704863081825713ULL;
unsigned short var_8 = (unsigned short)46863;
signed char var_9 = (signed char)-80;
int var_10 = -1244690621;
int zero = 0;
unsigned int var_12 = 2150779366U;
unsigned short var_13 = (unsigned short)41779;
short var_14 = (short)3677;
unsigned int var_15 = 1782175094U;
unsigned short var_16 = (unsigned short)22263;
unsigned short var_17 = (unsigned short)28951;
unsigned char var_18 = (unsigned char)6;
unsigned long long int var_19 = 3530807771427130613ULL;
unsigned char var_20 = (unsigned char)76;
unsigned long long int var_21 = 8341934324043323166ULL;
unsigned short var_22 = (unsigned short)657;
short var_23 = (short)12180;
int var_24 = 1422768876;
_Bool var_25 = (_Bool)1;
unsigned long long int var_26 = 319347086000338440ULL;
unsigned long long int arr_1 [11] ;
unsigned int arr_2 [11] ;
_Bool arr_3 [11] ;
unsigned short arr_5 [11] [11] ;
unsigned short arr_7 [11] [11] ;
short arr_10 [11] [11] [11] [11] [11] [11] ;
unsigned int arr_18 [16] ;
unsigned int arr_20 [16] [16] ;
int arr_23 [16] [16] [16] [16] ;
unsigned short arr_24 [16] [16] [16] [16] ;
unsigned int arr_32 [16] [16] ;
_Bool arr_11 [11] [11] [11] [11] ;
long long int arr_25 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 9042253004006318373ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 1947163399U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)24283;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)36075;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)13676;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = 480496133U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_20 [i_0] [i_1] = 2369598074U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 1427104271;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (unsigned short)1027;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_32 [i_0] [i_1] = 1383889652U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 214037894627176122LL : 7655176170937986510LL;
}

void checksum() {
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
