#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 841742349;
signed char var_2 = (signed char)28;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 16765954727946343516ULL;
long long int var_6 = -1306296346746023611LL;
signed char var_7 = (signed char)20;
short var_9 = (short)-3183;
unsigned long long int var_10 = 17562886390611721322ULL;
unsigned char var_12 = (unsigned char)87;
unsigned long long int var_13 = 10101830943180245858ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)198;
long long int var_16 = -8431032460717922554LL;
unsigned short var_17 = (unsigned short)51818;
signed char var_18 = (signed char)116;
long long int var_19 = 6692495944751822270LL;
unsigned int var_20 = 1353724191U;
unsigned short var_21 = (unsigned short)13517;
long long int var_22 = 298382803563684201LL;
unsigned char var_23 = (unsigned char)182;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)0;
long long int var_26 = -4529715673222100726LL;
signed char arr_0 [15] ;
unsigned short arr_1 [15] [15] ;
unsigned char arr_2 [15] ;
long long int arr_4 [15] ;
short arr_5 [15] [15] ;
unsigned short arr_6 [15] ;
unsigned short arr_8 [18] ;
unsigned short arr_9 [18] ;
unsigned short arr_10 [18] [18] ;
_Bool arr_11 [18] [18] ;
short arr_13 [13] ;
int arr_14 [13] ;
unsigned int arr_16 [24] ;
short arr_17 [24] ;
long long int arr_18 [24] ;
unsigned int arr_19 [24] [24] [24] ;
unsigned short arr_20 [24] [24] ;
_Bool arr_21 [24] [24] ;
unsigned int arr_24 [24] [24] [24] ;
int arr_3 [15] ;
unsigned int arr_7 [15] ;
unsigned int arr_12 [18] [18] ;
long long int arr_15 [13] ;
int arr_22 [24] ;
long long int arr_23 [24] ;
unsigned int arr_26 [24] [24] ;
_Bool arr_27 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)35179;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -4590252164845576357LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-16836;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned short)534;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)3351 : (unsigned short)13844;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (unsigned short)62497;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)22539 : (unsigned short)37398;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (short)6087;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = 845342941;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 2370704638U : 2256953884U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (short)18341 : (short)10623;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = 7609086108971370163LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 1244076103U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned short)42551;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 185935442U : 4151079940U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = -728528773;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 3681454890U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? 2477084235U : 18371061U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = 4690609543864721389LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? -1206635601 : 1252956457;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? -3322898396367164565LL : -2598282252711725953LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_26 [i_0] [i_1] = (i_0 % 2 == 0) ? 598305839U : 746100773U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
