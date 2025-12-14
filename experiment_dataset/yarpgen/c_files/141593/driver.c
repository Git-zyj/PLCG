#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47642;
unsigned char var_1 = (unsigned char)69;
unsigned short var_2 = (unsigned short)8576;
unsigned char var_9 = (unsigned char)147;
long long int var_11 = -8620949798071435711LL;
unsigned char var_12 = (unsigned char)232;
int zero = 0;
long long int var_15 = 8373680909803484475LL;
unsigned int var_16 = 3166805282U;
signed char var_17 = (signed char)93;
int var_18 = -1313734020;
unsigned short var_19 = (unsigned short)29607;
signed char var_20 = (signed char)-35;
unsigned short var_21 = (unsigned short)7184;
unsigned long long int var_22 = 10159805756693089372ULL;
long long int var_23 = -5935065019387397512LL;
unsigned long long int var_24 = 3611937380147636809ULL;
unsigned int var_25 = 2838012827U;
short var_26 = (short)10517;
unsigned short var_27 = (unsigned short)13511;
unsigned long long int var_28 = 3769165462346767293ULL;
short var_29 = (short)1856;
unsigned short var_30 = (unsigned short)18483;
long long int var_31 = 894508872030372682LL;
signed char var_32 = (signed char)16;
unsigned char var_33 = (unsigned char)246;
unsigned long long int var_34 = 11594613275562878654ULL;
unsigned int arr_0 [16] ;
signed char arr_1 [16] [16] ;
long long int arr_2 [16] ;
unsigned int arr_3 [16] [16] ;
int arr_4 [16] [16] [16] ;
unsigned int arr_5 [16] [16] [16] ;
long long int arr_6 [16] [16] [16] ;
_Bool arr_8 [16] [16] [16] [16] ;
unsigned int arr_9 [16] [16] [16] ;
unsigned int arr_10 [16] ;
int arr_11 [16] ;
signed char arr_13 [16] [16] [16] ;
unsigned int arr_14 [16] [16] [16] [16] [16] [16] ;
long long int arr_17 [16] [16] ;
_Bool arr_19 [16] [16] ;
short arr_12 [16] ;
long long int arr_15 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 2672706438U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -3723314432667085893LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 2742275912U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1443129318;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1998611355U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -155231953955141838LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1157352270U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 1237755799U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = -87423628;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2741996832U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_17 [i_0] [i_1] = -5262495992707524387LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_19 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (short)-22267;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = -158715787891109632LL;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
