#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = -239760130;
_Bool var_6 = (_Bool)0;
int var_7 = 1512415531;
unsigned short var_8 = (unsigned short)35673;
unsigned long long int var_10 = 2130050823605117886ULL;
unsigned short var_12 = (unsigned short)8309;
int zero = 0;
long long int var_13 = -4227613687778735192LL;
unsigned short var_14 = (unsigned short)33564;
int var_15 = -1211129407;
int var_16 = 1219522254;
short var_17 = (short)-22684;
short var_18 = (short)-10632;
signed char var_19 = (signed char)89;
long long int var_20 = 674806479994592634LL;
long long int var_21 = -1019376248462404131LL;
int var_22 = -190714250;
signed char var_23 = (signed char)-124;
unsigned char var_24 = (unsigned char)170;
unsigned char arr_0 [18] ;
signed char arr_1 [18] ;
short arr_4 [21] ;
_Bool arr_5 [21] ;
_Bool arr_8 [23] [23] ;
unsigned short arr_9 [23] [23] ;
int arr_11 [23] [23] ;
unsigned short arr_13 [23] [23] [23] [23] ;
short arr_2 [18] ;
_Bool arr_3 [18] ;
unsigned short arr_6 [21] [21] ;
short arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (short)27646;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)25978 : (unsigned short)37711;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = 20510016;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)51808;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)7126;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)34374;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (short)-24877;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
