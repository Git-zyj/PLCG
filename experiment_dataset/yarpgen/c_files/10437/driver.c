#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -498364498;
unsigned int var_1 = 1780308756U;
signed char var_2 = (signed char)-106;
unsigned int var_3 = 2401771968U;
unsigned short var_4 = (unsigned short)43635;
long long int var_5 = -5288466756578243843LL;
short var_6 = (short)4554;
unsigned int var_7 = 2689422085U;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 3660668947U;
long long int var_10 = -1121629210515786239LL;
int var_11 = -1744310304;
unsigned int var_12 = 3061130540U;
unsigned int var_13 = 1046903276U;
unsigned long long int var_14 = 4316322398072215766ULL;
short var_15 = (short)-11999;
int zero = 0;
long long int var_16 = 1285305185427584512LL;
unsigned long long int var_17 = 15323671374828185903ULL;
unsigned int var_18 = 2813488986U;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 4260508189821411397ULL;
int var_21 = 1380689537;
signed char var_22 = (signed char)8;
unsigned short var_23 = (unsigned short)16574;
int var_24 = 1588518404;
short var_25 = (short)-15508;
int var_26 = 1687731602;
short var_27 = (short)-2171;
long long int var_28 = -6756927219277273802LL;
long long int var_29 = -773286945759576057LL;
unsigned short var_30 = (unsigned short)2340;
unsigned long long int var_31 = 7608231982412608799ULL;
_Bool var_32 = (_Bool)0;
unsigned int var_33 = 2166121974U;
int var_34 = -2102858009;
unsigned char var_35 = (unsigned char)94;
unsigned char var_36 = (unsigned char)131;
short var_37 = (short)17165;
unsigned int arr_1 [11] ;
signed char arr_3 [11] [11] [11] ;
unsigned char arr_4 [11] [11] ;
unsigned int arr_5 [11] [11] [11] [11] ;
signed char arr_6 [11] [11] ;
long long int arr_7 [11] ;
unsigned long long int arr_9 [11] ;
unsigned long long int arr_10 [11] [11] [11] ;
unsigned long long int arr_11 [11] ;
unsigned int arr_14 [11] [11] [11] [11] [11] ;
unsigned char arr_15 [11] ;
int arr_16 [11] [11] [11] [11] [11] [11] [11] ;
unsigned int arr_24 [11] [11] ;
long long int arr_37 [11] ;
unsigned int arr_40 [18] ;
_Bool arr_41 [18] ;
signed char arr_45 [17] [17] ;
unsigned long long int arr_18 [11] [11] [11] [11] [11] [11] ;
signed char arr_38 [11] ;
signed char arr_39 [11] ;
_Bool arr_42 [18] [18] ;
short arr_46 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1990436919U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 2628412260U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 5296738121890942150LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = 2691865696001103218ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 9305981454228746210ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = 9386211248143104635ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 3585608193U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned char)95 : (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? 1268578877 : 706343087;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_24 [i_0] [i_1] = 3558050488U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_37 [i_0] = -8194710269489169574LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_40 [i_0] = 2673239024U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_41 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_45 [i_0] [i_1] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 17393310981297836979ULL : 964960246388557959ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_38 [i_0] = (signed char)59;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_39 [i_0] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_42 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_46 [i_0] [i_1] = (short)7032;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_42 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_46 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
