#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16889;
int var_1 = -477687339;
int var_2 = -368480499;
unsigned short var_5 = (unsigned short)61260;
int var_8 = 669502075;
unsigned short var_9 = (unsigned short)46454;
short var_10 = (short)-7163;
unsigned char var_11 = (unsigned char)172;
int var_12 = 949923941;
unsigned char var_13 = (unsigned char)31;
int var_14 = 1625651829;
int zero = 0;
long long int var_15 = -5389420695986893962LL;
int var_16 = 1758738146;
unsigned short var_17 = (unsigned short)20622;
unsigned short var_18 = (unsigned short)61488;
unsigned short var_19 = (unsigned short)47084;
unsigned short var_20 = (unsigned short)40170;
_Bool var_21 = (_Bool)0;
long long int var_22 = -6628798311808761782LL;
long long int var_23 = 6093043420658142257LL;
unsigned char var_24 = (unsigned char)208;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)0;
short var_27 = (short)-21127;
int var_28 = 478157475;
short var_29 = (short)27977;
unsigned short var_30 = (unsigned short)59439;
_Bool var_31 = (_Bool)1;
unsigned short var_32 = (unsigned short)65208;
unsigned short arr_0 [13] ;
_Bool arr_1 [13] ;
short arr_5 [11] ;
unsigned short arr_11 [11] [11] ;
int arr_14 [11] [11] [11] ;
unsigned short arr_15 [11] [11] ;
unsigned short arr_18 [11] [11] ;
unsigned short arr_20 [11] [11] ;
unsigned char arr_2 [13] ;
int arr_3 [13] ;
unsigned short arr_10 [11] ;
int arr_21 [11] [11] ;
unsigned short arr_22 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)13507;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (short)-31431;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)35584;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -769899360;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)26698;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)64384;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned short)55588;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)35 : (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -2042388699 : 508625696;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (unsigned short)19481;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_21 [i_0] [i_1] = 716290531;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = (unsigned short)18780;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
