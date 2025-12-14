#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-71;
unsigned char var_1 = (unsigned char)92;
unsigned char var_2 = (unsigned char)203;
unsigned short var_3 = (unsigned short)17462;
unsigned char var_4 = (unsigned char)105;
unsigned char var_5 = (unsigned char)110;
unsigned char var_6 = (unsigned char)202;
unsigned short var_7 = (unsigned short)43;
unsigned long long int var_8 = 9597301255628096617ULL;
unsigned int var_9 = 1701355088U;
signed char var_10 = (signed char)-2;
int zero = 0;
unsigned char var_11 = (unsigned char)158;
unsigned short var_12 = (unsigned short)29365;
int var_13 = -131223849;
unsigned int var_14 = 3835893540U;
unsigned short var_15 = (unsigned short)58384;
unsigned char var_16 = (unsigned char)14;
unsigned long long int var_17 = 357376482875871440ULL;
int var_18 = 103788088;
signed char var_19 = (signed char)-92;
unsigned short var_20 = (unsigned short)6071;
int var_21 = -531833435;
unsigned char arr_0 [12] [12] ;
unsigned char arr_1 [12] [12] ;
int arr_2 [12] ;
unsigned short arr_3 [12] ;
unsigned char arr_4 [12] ;
unsigned char arr_5 [12] ;
unsigned short arr_10 [12] [12] ;
unsigned char arr_13 [12] ;
unsigned short arr_6 [12] ;
signed char arr_7 [12] ;
int arr_8 [12] [12] ;
unsigned char arr_9 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -812820119;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)6247;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)35334;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned short)61472;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = 1219241882;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)220;
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
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
