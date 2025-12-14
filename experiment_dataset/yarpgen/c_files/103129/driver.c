#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)876;
unsigned long long int var_1 = 4590054850989215364ULL;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-14727;
unsigned char var_5 = (unsigned char)193;
signed char var_6 = (signed char)-122;
long long int var_7 = 5862410804115580903LL;
unsigned int var_8 = 2355943151U;
long long int var_9 = 5921607516741339282LL;
signed char var_10 = (signed char)-120;
int zero = 0;
unsigned int var_12 = 2466413987U;
unsigned int var_13 = 526268271U;
_Bool var_14 = (_Bool)1;
short var_15 = (short)11660;
long long int var_16 = -2366924266972953694LL;
unsigned int var_17 = 3902336486U;
unsigned char var_18 = (unsigned char)11;
short var_19 = (short)-16305;
unsigned short var_20 = (unsigned short)30442;
short var_21 = (short)6811;
int var_22 = 1891701954;
unsigned long long int var_23 = 2553795497325261946ULL;
long long int var_24 = 7369294271276754544LL;
unsigned char var_25 = (unsigned char)60;
signed char var_26 = (signed char)114;
unsigned short var_27 = (unsigned short)51148;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)1;
_Bool var_30 = (_Bool)1;
unsigned int var_31 = 1542251784U;
unsigned int var_32 = 1750009337U;
unsigned char var_33 = (unsigned char)120;
unsigned long long int var_34 = 1325279249841367920ULL;
signed char var_35 = (signed char)-108;
signed char var_36 = (signed char)-124;
short var_37 = (short)-26298;
long long int var_38 = 8932337687895244301LL;
signed char var_39 = (signed char)46;
short arr_1 [13] ;
short arr_2 [13] ;
unsigned short arr_8 [11] ;
signed char arr_10 [11] ;
short arr_12 [11] ;
unsigned long long int arr_15 [11] [11] [11] ;
int arr_16 [11] ;
unsigned short arr_17 [11] [11] ;
short arr_23 [11] [11] [11] [11] ;
unsigned short arr_24 [11] [11] [11] ;
_Bool arr_33 [11] ;
short arr_34 [11] [11] [11] ;
unsigned long long int arr_3 [13] ;
unsigned int arr_20 [11] [11] ;
unsigned short arr_26 [11] [11] [11] ;
short arr_36 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)5235;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)141;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (unsigned short)23613;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)-87 : (signed char)93;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (short)-24196;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 2622981218761681422ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = -581543593;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)8124 : (unsigned short)19882;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (short)-9480;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (unsigned short)53207;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_33 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)12250 : (short)-5734;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 8862688612951824942ULL : 12534054751787519605ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? 127878084U : 1298024104U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)4718 : (unsigned short)39554;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-32703 : (short)-25818;
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
