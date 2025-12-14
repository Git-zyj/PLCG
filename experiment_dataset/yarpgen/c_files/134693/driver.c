#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_8 = 4320262211661784700LL;
unsigned long long int var_9 = 10561867704946375678ULL;
short var_12 = (short)32760;
unsigned char var_13 = (unsigned char)61;
unsigned int var_14 = 690722456U;
unsigned long long int var_15 = 1523062841206763390ULL;
unsigned short var_17 = (unsigned short)41538;
unsigned short var_19 = (unsigned short)31788;
int zero = 0;
long long int var_20 = -3073204269309765360LL;
int var_21 = -567094721;
signed char var_22 = (signed char)-85;
short var_23 = (short)7608;
unsigned long long int var_24 = 11782263702551674807ULL;
unsigned short var_25 = (unsigned short)3015;
long long int var_26 = -2671758221416946770LL;
unsigned int var_27 = 4103914179U;
unsigned char var_28 = (unsigned char)26;
long long int var_29 = -641484950338380861LL;
_Bool var_30 = (_Bool)0;
unsigned int arr_0 [18] ;
unsigned char arr_1 [18] ;
_Bool arr_3 [18] [18] ;
int arr_4 [18] ;
_Bool arr_5 [18] ;
unsigned int arr_7 [18] [18] [18] ;
unsigned short arr_8 [18] [18] [18] ;
int arr_9 [18] [18] ;
long long int arr_10 [18] ;
_Bool arr_13 [18] [18] ;
unsigned int arr_18 [18] [18] [18] [18] [18] ;
short arr_21 [18] [18] [18] ;
short arr_6 [18] ;
short arr_26 [18] ;
short arr_29 [16] ;
unsigned int arr_30 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 316565842U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 1148268948;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 2183160054U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)39132;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = 893285817;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = -6344674462322025757LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = 3077058155U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)13863 : (short)-19690;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)11407 : (short)25670;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (short)17549 : (short)-25369;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_29 [i_0] = (short)7198;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_30 [i_0] [i_1] = 2128937533U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
