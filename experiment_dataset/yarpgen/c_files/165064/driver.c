#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)39;
unsigned char var_11 = (unsigned char)15;
int zero = 0;
unsigned short var_17 = (unsigned short)7544;
unsigned char var_18 = (unsigned char)112;
unsigned char var_19 = (unsigned char)106;
unsigned int var_20 = 1402891746U;
unsigned char var_21 = (unsigned char)9;
int var_22 = 979893129;
unsigned long long int var_23 = 2795937396566447768ULL;
unsigned char var_24 = (unsigned char)227;
unsigned char var_25 = (unsigned char)56;
unsigned long long int var_26 = 11488623154172677684ULL;
unsigned char arr_0 [12] [12] ;
unsigned char arr_2 [12] [12] ;
int arr_4 [17] ;
unsigned char arr_5 [17] ;
_Bool arr_6 [17] ;
unsigned char arr_7 [17] ;
signed char arr_8 [17] ;
unsigned char arr_11 [17] [17] ;
int arr_3 [12] ;
short arr_10 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -1150613344;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)20 : (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 18441916;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-15902;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
