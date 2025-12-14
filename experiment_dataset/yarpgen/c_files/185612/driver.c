#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-85;
unsigned int var_1 = 2524152317U;
int var_2 = -1437525040;
unsigned short var_5 = (unsigned short)38822;
signed char var_6 = (signed char)-31;
unsigned int var_7 = 418992758U;
long long int var_8 = -3204029920537977568LL;
unsigned long long int var_9 = 7927550015351594733ULL;
unsigned long long int var_10 = 6527645815843431805ULL;
unsigned char var_11 = (unsigned char)186;
unsigned short var_12 = (unsigned short)19146;
signed char var_13 = (signed char)2;
unsigned short var_14 = (unsigned short)10780;
short var_16 = (short)-16000;
unsigned char var_18 = (unsigned char)72;
int zero = 0;
signed char var_19 = (signed char)48;
signed char var_20 = (signed char)102;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 2564372745781974417ULL;
long long int var_23 = 2231252870843272476LL;
short var_24 = (short)-14463;
signed char var_25 = (signed char)-113;
short var_26 = (short)20245;
unsigned short var_27 = (unsigned short)8533;
short var_28 = (short)1123;
signed char var_29 = (signed char)-31;
_Bool var_30 = (_Bool)0;
_Bool var_31 = (_Bool)0;
unsigned short var_32 = (unsigned short)45193;
unsigned short var_33 = (unsigned short)55796;
short var_34 = (short)1670;
unsigned long long int var_35 = 13656466362331382362ULL;
_Bool var_36 = (_Bool)0;
short arr_0 [10] ;
unsigned long long int arr_1 [10] ;
unsigned short arr_3 [10] [10] ;
int arr_4 [10] ;
unsigned short arr_5 [10] ;
unsigned short arr_9 [20] ;
_Bool arr_10 [20] ;
unsigned short arr_13 [15] ;
unsigned char arr_14 [15] ;
short arr_15 [15] ;
_Bool arr_19 [15] ;
int arr_27 [15] [15] [15] [15] ;
long long int arr_29 [23] [23] ;
unsigned long long int arr_31 [23] ;
long long int arr_32 [23] [23] ;
unsigned short arr_37 [23] [23] [23] ;
signed char arr_38 [23] [23] ;
short arr_41 [23] [23] [23] [23] [23] ;
long long int arr_2 [10] ;
unsigned long long int arr_8 [10] [10] ;
unsigned long long int arr_11 [20] [20] ;
_Bool arr_12 [20] ;
short arr_16 [15] [15] ;
short arr_17 [15] [15] ;
unsigned long long int arr_18 [15] ;
int arr_28 [15] [15] ;
int arr_35 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)14711;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 8851345708387280882ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)1820;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = -270313757;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)8820;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (unsigned short)5107;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (unsigned short)4139;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (short)19425;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1821920573 : 572705173;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_29 [i_0] [i_1] = -5540286659117810397LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_31 [i_0] = 1494038173277077478ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_32 [i_0] [i_1] = -4864696699315603189LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)18829 : (unsigned short)10564;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_38 [i_0] [i_1] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (short)2175 : (short)-5437;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 6507825040762609277LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = 12597377311285780441ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = 8975428487862095591ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_16 [i_0] [i_1] = (short)22860;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (short)20519;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = 3207745788828450118ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_28 [i_0] [i_1] = (i_0 % 2 == 0) ? -1781002371 : -801489409;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? -2088023765 : -1849453636;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
