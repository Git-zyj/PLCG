#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3842928630U;
unsigned short var_1 = (unsigned short)32183;
unsigned char var_3 = (unsigned char)112;
unsigned char var_4 = (unsigned char)46;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-124;
unsigned int var_8 = 1027823089U;
signed char var_10 = (signed char)-28;
unsigned short var_12 = (unsigned short)56594;
unsigned char var_15 = (unsigned char)191;
signed char var_16 = (signed char)-61;
int var_17 = -1613022319;
unsigned long long int var_18 = 9390138384143425874ULL;
int zero = 0;
unsigned long long int var_19 = 7471076914967901271ULL;
unsigned long long int var_20 = 14910489556657449368ULL;
unsigned short var_21 = (unsigned short)40204;
unsigned char var_22 = (unsigned char)165;
unsigned char var_23 = (unsigned char)75;
short var_24 = (short)-13252;
unsigned char var_25 = (unsigned char)100;
unsigned char var_26 = (unsigned char)34;
_Bool arr_1 [25] ;
int arr_2 [25] ;
unsigned int arr_3 [25] [25] ;
unsigned long long int arr_5 [25] [25] ;
int arr_6 [25] [25] [25] ;
unsigned short arr_7 [25] [25] ;
unsigned long long int arr_8 [25] [25] [25] [25] ;
unsigned short arr_10 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -1096096515;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 489312349U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 4483740328765419068ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -565843087;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)28107 : (unsigned short)1777;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 15373468368495981291ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)43143;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
