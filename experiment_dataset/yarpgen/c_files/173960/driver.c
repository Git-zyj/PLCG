#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 80009456105926220ULL;
unsigned long long int var_2 = 3735243197600672298ULL;
int var_3 = -1574589754;
signed char var_5 = (signed char)30;
signed char var_6 = (signed char)-33;
long long int var_7 = -3925182553366378799LL;
unsigned int var_8 = 54977281U;
unsigned long long int var_10 = 9455005910464505908ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)3948;
signed char var_12 = (signed char)42;
long long int var_13 = 8938511746716407840LL;
unsigned char var_14 = (unsigned char)203;
int var_15 = 1690527091;
short var_16 = (short)-5924;
short var_17 = (short)3653;
unsigned long long int var_18 = 4898894379275291393ULL;
signed char var_19 = (signed char)103;
long long int var_20 = 2105551599042054127LL;
signed char var_21 = (signed char)-114;
short var_22 = (short)16388;
unsigned long long int var_23 = 11662764145339738358ULL;
unsigned int var_24 = 514867632U;
int var_25 = 754742673;
long long int var_26 = 5640612731873230686LL;
unsigned long long int var_27 = 1574905383166953141ULL;
_Bool var_28 = (_Bool)1;
int var_29 = 1282241529;
_Bool var_30 = (_Bool)1;
unsigned short var_31 = (unsigned short)42738;
unsigned char var_32 = (unsigned char)7;
signed char var_33 = (signed char)-103;
unsigned long long int var_34 = 8609525605180942991ULL;
signed char var_35 = (signed char)-67;
short var_36 = (short)14213;
unsigned short var_37 = (unsigned short)7110;
long long int var_38 = -4358855262604256264LL;
unsigned long long int var_39 = 6815303763445215234ULL;
unsigned char var_40 = (unsigned char)58;
signed char var_41 = (signed char)-47;
_Bool var_42 = (_Bool)0;
short var_43 = (short)-32249;
_Bool arr_0 [21] ;
signed char arr_1 [21] [21] ;
signed char arr_2 [21] [21] ;
unsigned long long int arr_3 [13] [13] ;
short arr_6 [13] [13] ;
unsigned short arr_8 [13] [13] [13] ;
int arr_9 [13] [13] [13] [13] ;
unsigned short arr_14 [13] ;
long long int arr_16 [13] [13] [13] [13] [13] ;
long long int arr_28 [23] [23] ;
signed char arr_29 [23] ;
unsigned short arr_30 [23] ;
int arr_32 [15] ;
int arr_36 [15] [15] [15] ;
short arr_37 [15] [15] ;
int arr_40 [15] ;
short arr_45 [15] [15] [15] [15] [15] ;
unsigned short arr_46 [15] [15] ;
_Bool arr_47 [15] [15] [15] [15] [15] ;
_Bool arr_57 [15] [15] [15] ;
int arr_19 [13] [13] [13] [13] [13] [13] ;
unsigned short arr_20 [13] [13] [13] ;
unsigned long long int arr_31 [23] [23] ;
unsigned int arr_35 [15] ;
_Bool arr_39 [15] ;
signed char arr_51 [15] ;
unsigned short arr_54 [15] ;
unsigned char arr_58 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 6878670842119944992ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-8625;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)12166;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -1484926469;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (unsigned short)14784;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = -8614071923528077816LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_28 [i_0] [i_1] = (i_0 % 2 == 0) ? 4557749847671273429LL : -124307419791401515LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_29 [i_0] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (unsigned short)39628 : (unsigned short)10417;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_32 [i_0] = -975259561;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = 1940936420;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_37 [i_0] [i_1] = (short)-9766;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_40 [i_0] = 1282406016;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-30332;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_46 [i_0] [i_1] = (unsigned short)64715;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1057722028;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned short)51133;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_31 [i_0] [i_1] = (i_0 % 2 == 0) ? 6416072626388184080ULL : 4931578159493213811ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_35 [i_0] = 625151584U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_39 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_51 [i_0] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_54 [i_0] = (unsigned short)58282;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_58 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)177 : (unsigned char)213;
}

void checksum() {
    hash(&seed, var_11);
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_51 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_54 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_58 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
