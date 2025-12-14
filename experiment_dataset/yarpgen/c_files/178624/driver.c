#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10545;
unsigned char var_1 = (unsigned char)25;
unsigned short var_2 = (unsigned short)5307;
short var_3 = (short)-26248;
unsigned char var_4 = (unsigned char)213;
unsigned short var_5 = (unsigned short)64417;
int var_6 = 2124324454;
int var_8 = -1511452562;
long long int var_9 = -973082076473297745LL;
long long int var_10 = 3367165331477535068LL;
signed char var_11 = (signed char)-24;
unsigned long long int var_12 = 4230365896885190288ULL;
int var_14 = 702276771;
long long int var_15 = -5024243656525050217LL;
short var_17 = (short)15872;
_Bool var_18 = (_Bool)1;
int zero = 0;
long long int var_20 = 3059359320755176096LL;
int var_21 = 1264751342;
short var_22 = (short)-10098;
short var_23 = (short)6284;
signed char var_24 = (signed char)42;
long long int var_25 = 7981452123844321270LL;
signed char var_26 = (signed char)35;
unsigned char var_27 = (unsigned char)89;
int var_28 = 929298177;
unsigned long long int arr_0 [19] [19] ;
unsigned int arr_1 [19] [19] ;
unsigned int arr_2 [19] ;
_Bool arr_6 [14] [14] ;
signed char arr_7 [14] ;
signed char arr_11 [11] ;
long long int arr_12 [11] [11] ;
int arr_3 [19] [19] ;
unsigned char arr_4 [19] [19] ;
unsigned char arr_5 [19] ;
unsigned short arr_8 [14] [14] ;
unsigned short arr_9 [14] ;
long long int arr_13 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 7590235166154420937ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 206448983U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 53454556U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (signed char)42;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = -9031761573128827465LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = -2045641350;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)56020;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (unsigned short)1775;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = 4294102151538084806LL;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
