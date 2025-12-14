#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 11744274837968045493ULL;
unsigned long long int var_2 = 6437706500573620602ULL;
unsigned short var_6 = (unsigned short)47913;
signed char var_9 = (signed char)-82;
int var_11 = 376494236;
int var_12 = -269921385;
unsigned long long int var_16 = 7250344293468190031ULL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)57080;
int zero = 0;
long long int var_19 = 3371552675257680164LL;
signed char var_20 = (signed char)21;
unsigned int var_21 = 935916854U;
unsigned short var_22 = (unsigned short)60249;
unsigned short var_23 = (unsigned short)7459;
unsigned short var_24 = (unsigned short)28919;
unsigned int var_25 = 4176312040U;
int var_26 = -1335439369;
unsigned int var_27 = 122961401U;
unsigned long long int var_28 = 527699125273061276ULL;
unsigned int arr_0 [11] [11] ;
_Bool arr_1 [11] ;
int arr_3 [11] ;
unsigned int arr_4 [11] [11] ;
unsigned int arr_7 [11] ;
unsigned long long int arr_12 [16] ;
_Bool arr_13 [16] [16] ;
unsigned char arr_14 [16] ;
int arr_2 [11] ;
int arr_5 [11] [11] ;
int arr_9 [11] ;
unsigned long long int arr_15 [16] [16] ;
signed char arr_16 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 2929864597U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 755389437;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 2176629092U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 2167207985U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = 4448284922331552348ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -918690008;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = -1227594835;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = -2060042419;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = 10940184936751606882ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (signed char)-54;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
