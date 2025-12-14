#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1388198175U;
unsigned short var_1 = (unsigned short)39250;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)10;
unsigned char var_4 = (unsigned char)143;
unsigned long long int var_5 = 12534570621919367436ULL;
short var_6 = (short)-30117;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-32295;
unsigned int var_9 = 3352070320U;
unsigned short var_10 = (unsigned short)16004;
unsigned int var_11 = 3206274176U;
unsigned short var_12 = (unsigned short)32009;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)204;
long long int var_16 = 2102821313562186089LL;
int var_17 = -921564311;
unsigned char var_18 = (unsigned char)231;
int zero = 0;
long long int var_19 = 3922823407785786030LL;
unsigned short var_20 = (unsigned short)54986;
unsigned char var_21 = (unsigned char)80;
short var_22 = (short)26025;
unsigned short var_23 = (unsigned short)56407;
int var_24 = -1756147585;
long long int var_25 = -3169425321498741587LL;
unsigned char var_26 = (unsigned char)232;
unsigned int var_27 = 2622837345U;
long long int var_28 = -4556323121506712848LL;
_Bool var_29 = (_Bool)0;
short var_30 = (short)2351;
unsigned char var_31 = (unsigned char)22;
unsigned long long int var_32 = 17384171892867784006ULL;
long long int var_33 = -6730112678554162648LL;
long long int var_34 = 6756616543156716367LL;
short var_35 = (short)-10928;
unsigned char var_36 = (unsigned char)214;
unsigned char var_37 = (unsigned char)130;
unsigned int var_38 = 2154219510U;
unsigned char var_39 = (unsigned char)1;
long long int var_40 = -4551657421511670272LL;
unsigned short arr_10 [15] [15] [15] ;
long long int arr_11 [15] [15] [15] ;
unsigned long long int arr_12 [15] ;
int arr_13 [15] ;
unsigned char arr_15 [15] [15] [15] [15] ;
signed char arr_17 [15] [15] ;
int arr_18 [15] [15] [15] [15] [15] ;
unsigned short arr_20 [15] [15] [15] ;
unsigned short arr_21 [15] [15] [15] [15] ;
unsigned int arr_24 [15] [15] [15] [15] [15] [15] [15] ;
unsigned int arr_25 [15] [15] [15] [15] [15] ;
unsigned int arr_28 [15] [15] [15] [15] [15] [15] [15] ;
unsigned char arr_30 [15] [15] [15] [15] ;
unsigned short arr_7 [12] [12] ;
long long int arr_26 [15] [15] [15] ;
unsigned long long int arr_33 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)61129;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -7436239680865161133LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = 13760498863997447865ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = -1774297896;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = -1747655135;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned short)51099;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned short)41645;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? 2276753727U : 3628663427U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = 312757391U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 2627188676U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)84 : (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)36661;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4787802741912906780LL : 636520194605769517LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_33 [i_0] = 17554854845457820354ULL;
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_33 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
