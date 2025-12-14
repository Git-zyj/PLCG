#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)29;
unsigned int var_6 = 3513453723U;
_Bool var_10 = (_Bool)0;
unsigned char var_13 = (unsigned char)204;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 8066691894163830837ULL;
int zero = 0;
unsigned long long int var_20 = 16633750777699451621ULL;
unsigned char var_21 = (unsigned char)100;
signed char var_22 = (signed char)-44;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)10;
unsigned long long int var_25 = 18023428814881477015ULL;
int var_26 = 973783851;
unsigned long long int var_27 = 3467705867425859549ULL;
signed char var_28 = (signed char)63;
unsigned int var_29 = 1942782698U;
_Bool arr_0 [22] ;
unsigned char arr_1 [22] ;
unsigned long long int arr_2 [22] ;
_Bool arr_3 [22] ;
signed char arr_6 [20] ;
int arr_7 [20] ;
unsigned char arr_4 [22] [22] ;
unsigned int arr_5 [22] ;
unsigned char arr_9 [20] [20] ;
unsigned long long int arr_12 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 14779890151272527553ULL : 15824814314466402315ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 1329809959;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)238 : (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 3983599908U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = 13323785516140854103ULL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
