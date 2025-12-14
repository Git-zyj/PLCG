#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -789917067;
signed char var_1 = (signed char)12;
unsigned char var_2 = (unsigned char)242;
long long int var_5 = 1031032566189537801LL;
int var_6 = 1108997683;
unsigned char var_7 = (unsigned char)186;
unsigned char var_8 = (unsigned char)235;
unsigned char var_10 = (unsigned char)49;
int zero = 0;
unsigned short var_13 = (unsigned short)51580;
unsigned int var_14 = 3708616549U;
int var_15 = 526163762;
int var_16 = 499669075;
unsigned char var_17 = (unsigned char)50;
unsigned char var_18 = (unsigned char)226;
unsigned char var_19 = (unsigned char)239;
unsigned char var_20 = (unsigned char)202;
int var_21 = -815693810;
long long int var_22 = 3425350248609341652LL;
_Bool arr_0 [23] [23] ;
unsigned char arr_1 [23] [23] ;
long long int arr_5 [17] ;
signed char arr_7 [17] [17] ;
unsigned int arr_9 [17] ;
signed char arr_10 [17] ;
signed char arr_3 [23] ;
unsigned int arr_4 [23] ;
signed char arr_8 [17] ;
signed char arr_11 [17] ;
unsigned char arr_14 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 4159438554467651719LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 2226234410U : 3266826182U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)76 : (signed char)40;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 1461915416U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)8 : (signed char)-98;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)52 : (unsigned char)19;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
