#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1298;
unsigned char var_1 = (unsigned char)176;
_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)24;
unsigned int var_6 = 3235736593U;
short var_7 = (short)21573;
unsigned char var_9 = (unsigned char)14;
int var_10 = -224880789;
short var_11 = (short)-10307;
_Bool var_12 = (_Bool)1;
short var_14 = (short)-21273;
signed char var_15 = (signed char)-91;
int var_16 = 2023997015;
short var_17 = (short)-21087;
signed char var_19 = (signed char)-80;
int zero = 0;
signed char var_20 = (signed char)106;
signed char var_21 = (signed char)-14;
unsigned int var_22 = 2154418170U;
unsigned int var_23 = 83063803U;
unsigned char var_24 = (unsigned char)122;
signed char var_25 = (signed char)-125;
signed char var_26 = (signed char)-122;
unsigned char var_27 = (unsigned char)155;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)0;
int var_30 = 1330510643;
short var_31 = (short)24407;
unsigned int var_32 = 2747484357U;
unsigned int var_33 = 3203193196U;
unsigned int arr_0 [16] ;
unsigned char arr_1 [16] [16] ;
unsigned char arr_3 [24] ;
signed char arr_4 [24] [24] ;
unsigned char arr_9 [24] [24] ;
int arr_10 [24] [24] [24] ;
unsigned int arr_13 [24] [24] ;
unsigned int arr_14 [24] ;
unsigned char arr_16 [24] ;
int arr_17 [24] [24] [24] [24] [24] [24] ;
int arr_22 [16] ;
unsigned int arr_2 [16] ;
unsigned char arr_5 [24] ;
signed char arr_20 [24] [24] ;
unsigned int arr_27 [16] ;
int arr_30 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 3316264012U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -784024440 : -1107009695;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 3134543986U : 1248075750U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = 1436409269U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned char)29 : (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -182368671;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = -1686426741;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 1658906524U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)57 : (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-67 : (signed char)-21;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? 3185741619U : 3237718322U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_30 [i_0] = -876222404;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
