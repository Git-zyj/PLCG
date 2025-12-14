#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -3081464720649997347LL;
unsigned short var_8 = (unsigned short)37754;
unsigned char var_11 = (unsigned char)95;
short var_12 = (short)27120;
signed char var_13 = (signed char)-124;
long long int var_15 = -6983579541177031421LL;
int zero = 0;
int var_17 = -96596240;
unsigned char var_18 = (unsigned char)81;
unsigned short var_19 = (unsigned short)25662;
unsigned char var_20 = (unsigned char)170;
unsigned int var_21 = 2808080905U;
int var_22 = 575888046;
unsigned char var_23 = (unsigned char)134;
unsigned long long int var_24 = 5765667044594107246ULL;
int var_25 = -868685452;
signed char var_26 = (signed char)-53;
unsigned char var_27 = (unsigned char)78;
_Bool var_28 = (_Bool)1;
unsigned short var_29 = (unsigned short)58865;
signed char var_30 = (signed char)-96;
long long int var_31 = 926791310136935631LL;
long long int arr_0 [16] ;
int arr_1 [16] ;
signed char arr_2 [16] [16] ;
int arr_7 [23] [23] [23] ;
unsigned int arr_13 [23] [23] [23] [23] ;
unsigned char arr_16 [23] [23] [23] [23] [23] ;
int arr_17 [24] ;
int arr_18 [24] ;
signed char arr_4 [16] ;
short arr_19 [24] ;
int arr_26 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -4362365396065451123LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 1693913138;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 865634136;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 2007716467U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = -1548737203;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? -1795250286 : -41628161;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (short)187 : (short)-3434;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? -2083502661 : 1039686817;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
