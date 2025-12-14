#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 692365840;
short var_1 = (short)23124;
unsigned char var_2 = (unsigned char)250;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)208;
short var_6 = (short)24450;
unsigned long long int var_7 = 5667963824043378865ULL;
unsigned short var_8 = (unsigned short)35548;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 10588794854152123889ULL;
unsigned char var_11 = (unsigned char)195;
short var_12 = (short)-127;
int var_13 = 207397547;
signed char var_14 = (signed char)3;
signed char var_15 = (signed char)31;
unsigned long long int var_16 = 3563501454715904022ULL;
int zero = 0;
signed char var_17 = (signed char)85;
unsigned char var_18 = (unsigned char)222;
unsigned short var_19 = (unsigned short)12815;
int var_20 = -2052061498;
signed char var_21 = (signed char)34;
long long int var_22 = -3824328930767766809LL;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)1882;
unsigned short var_25 = (unsigned short)56798;
unsigned short var_26 = (unsigned short)15584;
unsigned char var_27 = (unsigned char)11;
unsigned int var_28 = 634924043U;
signed char var_29 = (signed char)64;
unsigned char var_30 = (unsigned char)18;
unsigned char var_31 = (unsigned char)0;
signed char var_32 = (signed char)-71;
unsigned long long int arr_0 [14] [14] ;
int arr_1 [14] ;
int arr_2 [14] ;
signed char arr_4 [14] [14] ;
int arr_9 [13] ;
unsigned long long int arr_13 [11] ;
short arr_15 [22] ;
unsigned short arr_16 [22] ;
unsigned char arr_17 [22] [22] ;
_Bool arr_19 [22] [22] [22] ;
int arr_20 [22] [22] [22] ;
short arr_22 [22] ;
unsigned char arr_23 [22] [22] [22] [22] ;
unsigned short arr_25 [22] [22] [22] [22] ;
unsigned long long int arr_26 [22] [22] ;
int arr_27 [22] ;
unsigned int arr_40 [22] [22] [22] [22] ;
short arr_6 [14] [14] ;
signed char arr_7 [14] ;
signed char arr_14 [11] ;
unsigned int arr_18 [22] ;
unsigned int arr_21 [22] ;
signed char arr_24 [22] [22] ;
unsigned long long int arr_29 [22] ;
unsigned long long int arr_33 [22] ;
int arr_36 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 3786701384639445559ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -794203270;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 810221862;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)33 : (signed char)-45;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = -297923512;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = 6516590751772594389ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (short)1075;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (unsigned short)44809;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 389960895;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = (short)-18997;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)15 : (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (unsigned short)62269;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_26 [i_0] [i_1] = 10450793764183597407ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_27 [i_0] = 1866381167;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = 1109837565U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-27486 : (short)-11424;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)-79 : (signed char)-105;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = 3154832047U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = 3334382421U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-83 : (signed char)72;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_29 [i_0] = 15532926618287672885ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_33 [i_0] = 10864771304004375902ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_36 [i_0] [i_1] = 950022706;
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
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
