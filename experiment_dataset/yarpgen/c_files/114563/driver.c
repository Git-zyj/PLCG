#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6924767480241202298LL;
unsigned short var_1 = (unsigned short)38770;
unsigned int var_3 = 2014602905U;
unsigned short var_5 = (unsigned short)40;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)53587;
unsigned char var_8 = (unsigned char)124;
short var_9 = (short)9966;
unsigned short var_10 = (unsigned short)65024;
unsigned long long int var_11 = 5576435322811539289ULL;
int zero = 0;
unsigned long long int var_12 = 16654422621208082235ULL;
unsigned int var_13 = 716662054U;
int var_14 = 1429603297;
unsigned char var_15 = (unsigned char)163;
_Bool var_16 = (_Bool)1;
long long int var_17 = -8949484090826167680LL;
unsigned short var_18 = (unsigned short)9824;
unsigned long long int var_19 = 14545230269596768109ULL;
int var_20 = 379225804;
int var_21 = 1529295289;
unsigned int var_22 = 508812363U;
int var_23 = -843990588;
unsigned char var_24 = (unsigned char)135;
_Bool var_25 = (_Bool)1;
unsigned long long int var_26 = 1146160669293024779ULL;
long long int var_27 = 8703828943244731912LL;
_Bool var_28 = (_Bool)1;
int var_29 = -1568990907;
unsigned long long int var_30 = 1330776725251568416ULL;
_Bool var_31 = (_Bool)0;
short var_32 = (short)24513;
unsigned long long int var_33 = 2275154533657194281ULL;
_Bool var_34 = (_Bool)1;
unsigned short var_35 = (unsigned short)64874;
_Bool var_36 = (_Bool)1;
short arr_1 [11] [11] ;
_Bool arr_3 [11] ;
unsigned char arr_4 [11] [11] [11] ;
long long int arr_6 [11] [11] ;
unsigned short arr_7 [11] ;
unsigned long long int arr_8 [11] ;
unsigned short arr_9 [11] [11] ;
long long int arr_10 [11] [11] ;
unsigned short arr_12 [11] [11] ;
unsigned long long int arr_15 [11] ;
int arr_16 [11] [11] [11] ;
unsigned int arr_18 [11] [11] [11] ;
unsigned long long int arr_19 [11] [11] [11] ;
unsigned int arr_20 [11] [11] ;
unsigned short arr_22 [11] [11] ;
unsigned long long int arr_26 [10] [10] ;
unsigned short arr_27 [18] ;
int arr_28 [18] ;
unsigned long long int arr_17 [11] ;
unsigned short arr_21 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-17406;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = -7985344164296987273LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (unsigned short)51310;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 2515010884528272310ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)45145;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = 3473062985951457491LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)17376;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 863528976674162182ULL : 18072579678510322176ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 140963124 : -90374162;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1227520559U : 3633795063U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2480316709035504553ULL : 16376202708071378868ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_20 [i_0] [i_1] = 3331630361U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)5723 : (unsigned short)40579;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_26 [i_0] [i_1] = 17302199466252392955ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_27 [i_0] = (unsigned short)45435;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_28 [i_0] = -2102613656;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 16082004191375644267ULL : 6440448882921285880ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)35590 : (unsigned short)23882;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
