#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)249;
long long int var_3 = 5758741110673049921LL;
unsigned short var_4 = (unsigned short)20570;
short var_5 = (short)-15251;
short var_6 = (short)-11575;
short var_7 = (short)-15750;
unsigned char var_9 = (unsigned char)237;
unsigned char var_11 = (unsigned char)122;
short var_12 = (short)3606;
int zero = 0;
unsigned char var_15 = (unsigned char)119;
_Bool var_16 = (_Bool)1;
short var_17 = (short)1765;
_Bool var_18 = (_Bool)0;
long long int var_19 = -9219097024853984326LL;
unsigned char var_20 = (unsigned char)187;
unsigned int var_21 = 132592896U;
signed char var_22 = (signed char)34;
short var_23 = (short)5736;
unsigned short var_24 = (unsigned short)43195;
unsigned int var_25 = 4173648315U;
long long int var_26 = 5277665842582869166LL;
unsigned char var_27 = (unsigned char)244;
short var_28 = (short)-4750;
unsigned int var_29 = 3891819848U;
unsigned char var_30 = (unsigned char)125;
unsigned short var_31 = (unsigned short)6536;
int var_32 = 1315376044;
unsigned char var_33 = (unsigned char)135;
unsigned long long int var_34 = 13033887234271072194ULL;
long long int var_35 = 2601630335237765605LL;
long long int var_36 = -4213780604369500289LL;
unsigned int var_37 = 3518735247U;
short arr_0 [14] ;
long long int arr_2 [14] [14] [14] ;
unsigned short arr_4 [14] [14] ;
short arr_5 [14] ;
long long int arr_7 [14] ;
_Bool arr_8 [14] [14] ;
unsigned long long int arr_11 [14] [14] [14] ;
unsigned int arr_12 [14] [14] [14] ;
long long int arr_13 [14] [14] [14] [14] ;
unsigned short arr_14 [14] [14] [14] ;
unsigned long long int arr_27 [14] ;
int arr_28 [14] ;
unsigned char arr_43 [14] [14] [14] [14] [14] ;
unsigned short arr_52 [23] ;
unsigned short arr_6 [14] [14] ;
_Bool arr_10 [14] ;
signed char arr_15 [14] [14] [14] ;
short arr_19 [14] ;
unsigned char arr_32 [14] [14] [14] ;
signed char arr_38 [14] ;
long long int arr_49 [12] [12] ;
_Bool arr_50 [12] ;
unsigned short arr_54 [23] ;
short arr_55 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)-24311;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 6336372332401801646LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)30504;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (short)-5608;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = -2058632996372299246LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4318633979042967335ULL : 2496662043714899611ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 3310947614U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = -6887720875471923645LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)19824 : (unsigned short)24319;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_27 [i_0] = 3804373157648283679ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_28 [i_0] = 1660653837;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_52 [i_0] = (unsigned short)7268;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)36424;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)107 : (signed char)127;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = (short)-14102;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_38 [i_0] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_49 [i_0] [i_1] = 3855435082796681712LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_50 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_54 [i_0] = (unsigned short)63482;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_55 [i_0] [i_1] = (short)-9026;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_49 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_50 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_54 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_55 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
