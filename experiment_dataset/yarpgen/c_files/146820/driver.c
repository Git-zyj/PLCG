#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 683431984;
unsigned int var_1 = 3992009861U;
unsigned int var_4 = 3562995196U;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)30;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3461864059U;
int zero = 0;
unsigned long long int var_11 = 1842106884565478779ULL;
int var_12 = 165749372;
long long int var_13 = 7628975435466572351LL;
long long int var_14 = 6233189935939996599LL;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 16351445130513160808ULL;
unsigned int var_18 = 3389598773U;
signed char arr_1 [12] ;
unsigned char arr_2 [12] ;
short arr_3 [12] [12] ;
long long int arr_4 [12] ;
short arr_8 [24] ;
unsigned char arr_9 [24] [24] ;
unsigned int arr_10 [24] ;
unsigned long long int arr_12 [14] ;
_Bool arr_13 [14] [14] ;
unsigned long long int arr_14 [14] [14] [14] ;
unsigned char arr_7 [12] ;
_Bool arr_11 [24] ;
short arr_17 [14] [14] [14] ;
unsigned char arr_18 [14] ;
unsigned int arr_19 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (short)6119;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 6027420740660322804LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (short)-24965;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 397744135U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 11597738314389159ULL : 12184782674747194606ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 1923886624859341931ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-1615 : (short)-30335;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (unsigned char)194 : (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3881565342U : 1815828057U;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
