#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
short var_1 = (short)670;
unsigned long long int var_3 = 15546980565865878428ULL;
long long int var_4 = 7739614026514066072LL;
unsigned long long int var_6 = 14495012839207304730ULL;
unsigned long long int var_8 = 13345398528900229786ULL;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)14935;
unsigned short var_13 = (unsigned short)47077;
int zero = 0;
short var_15 = (short)-4752;
unsigned int var_16 = 4216809289U;
long long int var_17 = 5985026614906016342LL;
unsigned long long int var_18 = 5187355109533466729ULL;
unsigned char arr_0 [13] [13] ;
unsigned short arr_1 [13] ;
short arr_4 [13] [13] [13] ;
long long int arr_5 [13] [13] ;
short arr_7 [13] ;
_Bool arr_2 [13] ;
long long int arr_3 [13] [13] ;
unsigned int arr_8 [13] [13] ;
short arr_9 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)255 : (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)65443;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-6962 : (short)19658;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 6633808407936908752LL : -920432373290972459LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (short)-8862;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -3038157910046752808LL : -556067758328027894LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 2909974840U : 2133244378U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)32500 : (short)-1509;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
