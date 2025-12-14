#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2479405741216976740LL;
unsigned int var_2 = 3395156966U;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-4175;
unsigned int var_5 = 3576524498U;
unsigned int var_6 = 3060866942U;
unsigned char var_7 = (unsigned char)194;
signed char var_8 = (signed char)82;
unsigned short var_9 = (unsigned short)28161;
short var_10 = (short)-18937;
unsigned int var_12 = 1970088181U;
signed char var_14 = (signed char)-110;
_Bool var_15 = (_Bool)1;
short var_16 = (short)17197;
unsigned char var_18 = (unsigned char)19;
int zero = 0;
signed char var_19 = (signed char)-98;
unsigned char var_20 = (unsigned char)234;
unsigned long long int var_21 = 10903962562407788818ULL;
signed char var_22 = (signed char)110;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)38930;
long long int var_25 = -587334234060651311LL;
_Bool var_26 = (_Bool)1;
unsigned char var_27 = (unsigned char)207;
unsigned int var_28 = 2440826651U;
int var_29 = 1091853454;
long long int var_30 = 8642465820024565664LL;
signed char var_31 = (signed char)-17;
signed char var_32 = (signed char)16;
signed char arr_0 [20] [20] ;
unsigned short arr_3 [20] ;
int arr_5 [20] [20] [20] ;
_Bool arr_6 [20] [20] [20] ;
signed char arr_7 [20] [20] [20] ;
_Bool arr_10 [20] ;
short arr_12 [25] ;
unsigned char arr_13 [25] [25] ;
signed char arr_15 [25] [25] ;
short arr_4 [20] ;
signed char arr_11 [20] [20] ;
_Bool arr_18 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)734;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1313768989;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (short)4384;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)-21863;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
