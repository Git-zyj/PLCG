#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11082;
short var_2 = (short)21131;
unsigned char var_6 = (unsigned char)191;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)6460;
int var_10 = 1424367126;
short var_11 = (short)10064;
unsigned short var_12 = (unsigned short)61308;
int zero = 0;
unsigned char var_15 = (unsigned char)137;
int var_16 = 1301985148;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-4077;
unsigned char var_19 = (unsigned char)103;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2778756621U;
long long int var_22 = -7014726710781679571LL;
int var_23 = -365491753;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)-93;
short var_26 = (short)-16690;
long long int var_27 = -1841484892890464184LL;
_Bool var_28 = (_Bool)0;
int var_29 = -480839562;
short var_30 = (short)8976;
unsigned int var_31 = 1853058773U;
long long int var_32 = -895534866013824164LL;
long long int var_33 = 5648374062395330197LL;
unsigned short var_34 = (unsigned short)59671;
short var_35 = (short)19359;
unsigned int var_36 = 2490788435U;
_Bool var_37 = (_Bool)1;
short var_38 = (short)-27426;
short var_39 = (short)7189;
unsigned short var_40 = (unsigned short)54069;
long long int var_41 = 8245166610033461651LL;
unsigned char var_42 = (unsigned char)249;
signed char var_43 = (signed char)100;
unsigned char arr_0 [11] [11] ;
short arr_1 [11] ;
short arr_3 [11] [11] [11] ;
unsigned char arr_6 [19] ;
int arr_7 [19] ;
unsigned short arr_11 [19] [19] [19] ;
short arr_13 [19] [19] [19] [19] ;
unsigned int arr_20 [19] ;
short arr_22 [19] [19] [19] ;
signed char arr_26 [24] ;
_Bool arr_28 [24] [24] ;
unsigned short arr_31 [24] [24] [24] [24] ;
_Bool arr_36 [24] [24] [24] [24] ;
long long int arr_37 [24] [24] [24] [24] [24] ;
_Bool arr_39 [24] ;
unsigned short arr_42 [24] [24] [24] [24] ;
unsigned short arr_45 [24] [24] [24] ;
unsigned char arr_49 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)47 : (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)28514 : (short)-18195;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-2658 : (short)-30204;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = -1458867402;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)39742;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (short)-20755;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = 2073651303U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)11821 : (short)-15455;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (signed char)-43 : (signed char)-1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_28 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (unsigned short)18756;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = 317962673308653384LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)47829 : (unsigned short)42289;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)55066 : (unsigned short)12123;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_49 [i_0] [i_1] [i_2] = (unsigned char)151;
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
