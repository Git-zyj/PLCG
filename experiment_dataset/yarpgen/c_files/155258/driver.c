#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)142;
int var_2 = -757775442;
unsigned long long int var_3 = 3303289666154950601ULL;
unsigned char var_4 = (unsigned char)125;
int var_5 = -2331893;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)46290;
_Bool var_11 = (_Bool)0;
int var_12 = -51813560;
int var_13 = -351524596;
short var_14 = (short)3121;
unsigned char var_15 = (unsigned char)190;
int zero = 0;
unsigned long long int var_16 = 17474766287215362093ULL;
int var_17 = -488862581;
unsigned char var_18 = (unsigned char)61;
int var_19 = 650620569;
unsigned long long int var_20 = 2364090375498083482ULL;
short var_21 = (short)-18552;
_Bool arr_1 [14] ;
int arr_2 [14] [14] [14] ;
signed char arr_4 [14] [14] [14] ;
short arr_7 [14] [14] [14] ;
unsigned char arr_8 [14] [14] [14] [14] ;
unsigned short arr_16 [18] ;
unsigned short arr_17 [18] ;
short arr_18 [18] ;
long long int arr_19 [18] ;
unsigned long long int arr_20 [18] ;
signed char arr_5 [14] [14] ;
int arr_6 [14] [14] [14] ;
signed char arr_15 [14] [14] [14] [14] ;
_Bool arr_24 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1724532495 : -105811533;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)37 : (signed char)-105;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)24128;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (unsigned short)16409;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (unsigned short)21182;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (short)-8779;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = -4819041278861894905LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = 17076005004806412547ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)49 : (signed char)100;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 819456019 : 567282350;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-123 : (signed char)48;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
