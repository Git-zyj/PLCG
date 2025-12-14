#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)-21221;
unsigned short var_9 = (unsigned short)44400;
unsigned char var_11 = (unsigned char)8;
_Bool var_13 = (_Bool)0;
unsigned char var_15 = (unsigned char)125;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)22198;
long long int var_19 = 5563771689615536673LL;
int zero = 0;
unsigned char var_20 = (unsigned char)154;
short var_21 = (short)-29664;
short var_22 = (short)-31666;
int var_23 = 2022676499;
unsigned long long int var_24 = 5862866348424670574ULL;
long long int var_25 = 2292063397656034653LL;
unsigned char var_26 = (unsigned char)67;
int var_27 = 1826125098;
short var_28 = (short)26355;
int var_29 = -1439107618;
short var_30 = (short)-5723;
unsigned long long int var_31 = 13787353373516340682ULL;
unsigned char var_32 = (unsigned char)201;
long long int var_33 = -7602634578410754662LL;
unsigned char var_34 = (unsigned char)57;
_Bool var_35 = (_Bool)0;
short var_36 = (short)4191;
_Bool arr_1 [13] ;
unsigned int arr_2 [13] [13] ;
unsigned short arr_3 [13] ;
unsigned short arr_5 [11] ;
unsigned char arr_6 [11] [11] ;
unsigned short arr_9 [11] ;
unsigned char arr_14 [10] [10] ;
_Bool arr_16 [17] ;
unsigned int arr_17 [17] ;
_Bool arr_18 [17] ;
int arr_19 [17] ;
unsigned short arr_22 [16] ;
unsigned char arr_25 [23] ;
unsigned char arr_26 [23] ;
unsigned char arr_27 [23] ;
unsigned short arr_32 [17] [17] ;
int arr_4 [13] [13] ;
_Bool arr_13 [11] [11] [11] ;
unsigned short arr_20 [17] ;
long long int arr_21 [17] [17] ;
short arr_24 [16] [16] ;
unsigned int arr_28 [23] ;
signed char arr_33 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 3922818644U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)59709 : (unsigned short)11310;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned short)24274;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (unsigned short)55760;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = 938115739U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = 467550652;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = (unsigned short)2489;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (unsigned char)120 : (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_27 [i_0] = (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_32 [i_0] [i_1] = (unsigned short)8532;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -1403381168 : -1220180052;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned short)8601 : (unsigned short)43983;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? 7304416704060800193LL : 4203558790477138541LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)10010 : (short)-6026;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 3481883773U : 796932199U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? (signed char)94 : (signed char)-32;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_33 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
