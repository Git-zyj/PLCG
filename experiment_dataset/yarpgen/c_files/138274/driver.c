#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)6754;
signed char var_8 = (signed char)-50;
unsigned long long int var_10 = 17534682461099923334ULL;
signed char var_12 = (signed char)-70;
int zero = 0;
int var_13 = -1051785655;
short var_14 = (short)24125;
int var_15 = -490582091;
long long int var_16 = 8366347176629133795LL;
unsigned long long int var_17 = 14803497407687229160ULL;
short var_18 = (short)24393;
unsigned int var_19 = 1516536022U;
long long int var_20 = -988998185815229276LL;
short var_21 = (short)30525;
short var_22 = (short)-20760;
int var_23 = 498798472;
unsigned char var_24 = (unsigned char)235;
unsigned long long int var_25 = 6341935517904508569ULL;
int var_26 = -63184136;
int var_27 = 389695978;
unsigned long long int var_28 = 4378406527209374978ULL;
unsigned long long int arr_0 [21] ;
unsigned char arr_2 [21] ;
int arr_3 [21] ;
unsigned int arr_4 [21] [21] [21] [21] ;
unsigned int arr_5 [21] [21] [21] [21] ;
unsigned char arr_7 [21] [21] [21] ;
unsigned char arr_12 [25] ;
unsigned char arr_13 [25] ;
unsigned int arr_14 [25] ;
short arr_18 [17] ;
int arr_21 [22] ;
short arr_22 [22] ;
signed char arr_25 [22] ;
unsigned char arr_26 [22] ;
short arr_27 [22] [22] [22] ;
int arr_28 [22] [22] [22] ;
int arr_33 [21] [21] ;
long long int arr_36 [21] [21] ;
short arr_38 [21] ;
unsigned int arr_6 [21] ;
long long int arr_11 [21] [21] ;
signed char arr_15 [25] ;
long long int arr_19 [17] ;
unsigned int arr_20 [17] [17] ;
unsigned int arr_23 [22] ;
unsigned char arr_30 [22] [22] [22] [22] ;
unsigned char arr_31 [22] ;
short arr_40 [21] [21] [21] ;
signed char arr_41 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 8880717003064295077ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 352211098;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 1905026538U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 17142288U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = 2804888064U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = (short)-16711;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = -1487412410;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = (short)-9725;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (signed char)-36 : (signed char)67;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_26 [i_0] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (short)-18955;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2131095664 : -2137820533;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_33 [i_0] [i_1] = (i_0 % 2 == 0) ? 609717309 : 1720246395;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_36 [i_0] [i_1] = (i_0 % 2 == 0) ? 646193481810075158LL : 1118832160005717051LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_38 [i_0] = (short)-3389;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1736271821U : 3933773482U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? -1271665615910421828LL : -5369239539757018865LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (signed char)-109 : (signed char)-114;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = -8704837984554297349LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_20 [i_0] [i_1] = 2082794785U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 1461057105U : 1020451562U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)82 : (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (unsigned char)116 : (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-3438 : (short)-22731;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)5 : (signed char)-21;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_40 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_41 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
