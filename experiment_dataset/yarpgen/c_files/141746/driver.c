#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1190916085;
signed char var_1 = (signed char)-1;
int var_2 = 1857323119;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)119;
signed char var_5 = (signed char)-76;
unsigned int var_6 = 2490225265U;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-110;
unsigned short var_9 = (unsigned short)40958;
int var_12 = -443248210;
unsigned char var_13 = (unsigned char)178;
int zero = 0;
long long int var_15 = 6152079501118060018LL;
short var_16 = (short)27487;
long long int var_17 = 6442695681318353548LL;
unsigned short var_18 = (unsigned short)6266;
short var_19 = (short)8592;
unsigned long long int var_20 = 10512774154396029228ULL;
unsigned int var_21 = 3058992547U;
int var_22 = -628662213;
_Bool arr_0 [22] ;
unsigned char arr_1 [22] [22] ;
unsigned int arr_2 [22] [22] ;
unsigned int arr_7 [24] ;
unsigned short arr_8 [24] ;
long long int arr_3 [22] ;
unsigned short arr_6 [22] ;
unsigned int arr_9 [24] [24] ;
unsigned char arr_10 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 2351141126U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 1334782588U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned short)37609;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -6793647100468805021LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)54049 : (unsigned short)33059;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = 3879983726U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (unsigned char)142;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
