#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1914378152;
unsigned int var_3 = 2845779864U;
unsigned long long int var_4 = 3137969403061287962ULL;
long long int var_5 = 7174888531057872354LL;
int var_6 = 1582898969;
unsigned short var_7 = (unsigned short)63810;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)153;
unsigned char var_14 = (unsigned char)195;
unsigned int var_16 = 1616653472U;
unsigned short var_17 = (unsigned short)23134;
int zero = 0;
unsigned char var_18 = (unsigned char)239;
signed char var_19 = (signed char)-32;
unsigned char var_20 = (unsigned char)199;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)186;
unsigned int var_26 = 778548042U;
unsigned long long int var_27 = 6847865218574378456ULL;
unsigned long long int var_28 = 17947725667274197357ULL;
signed char var_29 = (signed char)109;
unsigned short arr_0 [25] ;
signed char arr_1 [25] ;
signed char arr_4 [18] ;
int arr_5 [18] ;
unsigned char arr_6 [18] ;
short arr_9 [12] ;
_Bool arr_12 [24] ;
unsigned int arr_15 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)45368;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 1381177018;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (short)1525;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 2890117576U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
