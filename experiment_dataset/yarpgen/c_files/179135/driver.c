#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -852155705423389621LL;
unsigned short var_2 = (unsigned short)8387;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)41820;
unsigned long long int var_6 = 17565443198743097841ULL;
unsigned int var_7 = 2117265655U;
unsigned char var_8 = (unsigned char)159;
unsigned short var_9 = (unsigned short)65061;
short var_10 = (short)16115;
int var_11 = -1498309847;
int var_13 = 1012634869;
unsigned int var_14 = 4127432447U;
unsigned int var_15 = 2469060176U;
int var_16 = 216358979;
short var_17 = (short)9882;
unsigned long long int var_18 = 1221460735021184367ULL;
int zero = 0;
long long int var_19 = -7843969265115011395LL;
long long int var_20 = 8785629201809436461LL;
signed char var_21 = (signed char)50;
unsigned short var_22 = (unsigned short)59267;
int var_23 = 419122255;
int var_24 = -1974513849;
long long int var_25 = -2460261697441270821LL;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)42284;
long long int arr_0 [24] [24] ;
unsigned long long int arr_1 [24] ;
signed char arr_3 [25] [25] ;
unsigned long long int arr_4 [25] [25] ;
unsigned long long int arr_5 [25] ;
unsigned short arr_6 [25] ;
short arr_8 [25] ;
signed char arr_9 [25] [25] [25] ;
short arr_13 [17] ;
unsigned short arr_2 [24] ;
unsigned long long int arr_7 [25] [25] ;
int arr_10 [25] [25] ;
unsigned short arr_11 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = -3070244337616461599LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 9408296517059566684ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)119 : (signed char)83;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 2074603064448004341ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 13022291338318278919ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned short)26825;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)32635 : (short)25690;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-126 : (signed char)-111;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (short)12507;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)62142;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 12876081063600341633ULL : 7781977005384675272ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? -1231492657 : 1491925966;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)4348 : (unsigned short)58790;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
