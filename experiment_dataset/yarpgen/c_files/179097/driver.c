#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1358895786;
int var_3 = -1414599393;
unsigned int var_4 = 803919321U;
unsigned short var_5 = (unsigned short)11508;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)71;
signed char var_10 = (signed char)123;
int var_11 = 869671673;
signed char var_12 = (signed char)123;
unsigned char var_13 = (unsigned char)21;
unsigned char var_14 = (unsigned char)59;
signed char var_16 = (signed char)-83;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)26;
unsigned char var_20 = (unsigned char)232;
int var_21 = -2114465029;
signed char var_22 = (signed char)29;
unsigned char var_23 = (unsigned char)53;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)0;
signed char arr_0 [19] ;
unsigned char arr_1 [19] ;
int arr_2 [19] ;
unsigned char arr_5 [19] ;
int arr_7 [19] ;
long long int arr_8 [19] ;
unsigned short arr_15 [19] ;
unsigned char arr_23 [19] ;
short arr_3 [19] [19] ;
unsigned short arr_4 [19] ;
int arr_9 [19] [19] ;
unsigned short arr_21 [19] [19] [19] [19] ;
signed char arr_24 [19] [19] [19] [19] ;
short arr_29 [19] [19] ;
unsigned long long int arr_30 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 1234966835;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 571797017;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = -9147011675895261382LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (unsigned short)17746;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-32415;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned short)44228;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = -1967060547;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)24266 : (unsigned short)12212;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-29 : (signed char)-80;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_29 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)23797 : (short)-7583;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? 1171708425793665164ULL : 17799593492626095479ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
