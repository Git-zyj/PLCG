#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1276697010U;
unsigned int var_1 = 2836420856U;
int var_2 = 1919873156;
_Bool var_4 = (_Bool)1;
int var_5 = -224124619;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 2464887334U;
unsigned int var_10 = 3297126200U;
int var_11 = 429585569;
int zero = 0;
unsigned int var_14 = 514407601U;
short var_15 = (short)-1797;
int var_16 = 1072032470;
short var_17 = (short)23681;
signed char var_18 = (signed char)-10;
long long int var_19 = -839258804223252498LL;
short var_20 = (short)-23513;
unsigned int var_21 = 61577516U;
short var_22 = (short)25565;
short var_23 = (short)20460;
unsigned int var_24 = 363011853U;
short var_25 = (short)-18811;
signed char var_26 = (signed char)109;
_Bool var_27 = (_Bool)1;
unsigned int var_28 = 3375210068U;
short var_29 = (short)-30383;
signed char var_30 = (signed char)-81;
unsigned int var_31 = 117285013U;
int var_32 = 700050910;
unsigned short arr_0 [17] [17] ;
int arr_1 [17] [17] ;
long long int arr_4 [17] [17] ;
unsigned char arr_6 [17] [17] [17] ;
unsigned int arr_7 [17] [17] [17] ;
int arr_10 [20] [20] ;
long long int arr_11 [20] ;
unsigned long long int arr_12 [20] ;
unsigned short arr_13 [20] ;
unsigned int arr_17 [20] [20] [20] ;
unsigned char arr_18 [20] [20] [20] ;
unsigned short arr_19 [20] [20] [20] ;
unsigned int arr_21 [20] [20] ;
signed char arr_23 [20] ;
int arr_24 [20] ;
short arr_2 [17] ;
unsigned short arr_3 [17] ;
unsigned short arr_25 [20] [20] [20] ;
unsigned char arr_26 [20] [20] ;
unsigned short arr_29 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)29233;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = -1092131902;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 1020521236931880129LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3910367472U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = -1197285124;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = -719664859917816317LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 180289960114670042ULL : 8646006734544769230ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)42765 : (unsigned short)34221;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 951071197U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)76 : (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)40947 : (unsigned short)31844;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? 2088441639U : 318912148U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (signed char)-32 : (signed char)-97;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = -727378029;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)10400;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)58932;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)41693 : (unsigned short)19326;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_26 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)2 : (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_29 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)11140 : (unsigned short)29499;
}

void checksum() {
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
