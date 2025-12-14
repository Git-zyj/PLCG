#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6489;
_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 8108771427547749758ULL;
unsigned short var_4 = (unsigned short)22534;
_Bool var_5 = (_Bool)1;
short var_6 = (short)26505;
unsigned short var_7 = (unsigned short)5009;
unsigned short var_8 = (unsigned short)62729;
unsigned char var_9 = (unsigned char)191;
short var_10 = (short)-30595;
unsigned short var_11 = (unsigned short)15802;
unsigned char var_12 = (unsigned char)121;
short var_13 = (short)-4710;
int zero = 0;
int var_14 = -66983223;
unsigned int var_15 = 3266152750U;
unsigned short var_16 = (unsigned short)44024;
unsigned long long int var_17 = 1801338094953134424ULL;
int var_18 = 4513237;
int var_19 = -1881851495;
unsigned long long int var_20 = 17291988095405549856ULL;
int var_21 = 2142991371;
unsigned short var_22 = (unsigned short)62365;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)63;
int var_25 = -1152600211;
unsigned short var_26 = (unsigned short)38252;
unsigned char var_27 = (unsigned char)52;
long long int var_28 = -7510627742954888801LL;
int var_29 = 1134971847;
int var_30 = 337330592;
int var_31 = 1390916755;
int arr_6 [24] ;
int arr_7 [24] [24] ;
_Bool arr_16 [24] [24] ;
short arr_25 [24] ;
unsigned int arr_28 [24] ;
unsigned short arr_38 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 341764111;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 851433286;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_16 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (short)18202 : (short)27728;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_28 [i_0] = 4072952995U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_38 [i_0] = (unsigned short)4;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
