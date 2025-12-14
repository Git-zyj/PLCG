#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -551320473;
short var_1 = (short)-21565;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1631805102U;
int var_4 = 708997060;
int var_5 = -898605996;
int var_6 = 2118133863;
unsigned char var_7 = (unsigned char)171;
int var_8 = 735329337;
signed char var_9 = (signed char)-38;
unsigned short var_10 = (unsigned short)28766;
int var_11 = 591193556;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 508756355U;
int var_14 = 1282133288;
unsigned int var_15 = 4019531014U;
int var_16 = -1542932819;
unsigned short var_17 = (unsigned short)38218;
signed char var_18 = (signed char)-121;
int var_19 = 999557179;
int var_20 = -557295904;
long long int var_21 = 8729173781002364562LL;
unsigned int var_22 = 2286906263U;
int var_23 = 1732735202;
unsigned char var_24 = (unsigned char)137;
long long int var_25 = -5483876669212886354LL;
unsigned long long int var_26 = 504662448565369252ULL;
signed char var_27 = (signed char)-79;
int var_28 = -1185489613;
unsigned short var_29 = (unsigned short)15417;
signed char arr_3 [15] ;
unsigned char arr_8 [23] ;
long long int arr_9 [23] ;
unsigned long long int arr_10 [23] [23] ;
short arr_12 [23] ;
unsigned long long int arr_13 [23] [23] [23] ;
unsigned short arr_15 [24] [24] ;
unsigned int arr_16 [24] ;
_Bool arr_21 [16] [16] ;
int arr_25 [16] [16] ;
unsigned short arr_28 [21] ;
unsigned short arr_4 [15] ;
unsigned int arr_5 [15] [15] ;
_Bool arr_14 [23] [23] [23] ;
long long int arr_23 [16] ;
signed char arr_24 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)171 : (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = -513678237493911044LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = 9315919726737694666ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (short)-1112;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 12490200295222553697ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)47214;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = 292741750U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_21 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_25 [i_0] [i_1] = -1984189621;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20471 : (unsigned short)10487;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)34681;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 3378901542U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? -1861672758209442265LL : 788241966668795159LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (signed char)105 : (signed char)-40;
}

void checksum() {
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
