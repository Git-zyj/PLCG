#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1627142921;
short var_2 = (short)-31609;
int var_5 = 936000209;
int var_6 = -1800331461;
unsigned char var_7 = (unsigned char)22;
int var_8 = 41676894;
short var_9 = (short)-30486;
int var_10 = 1606637642;
int var_11 = 1021262912;
unsigned char var_12 = (unsigned char)217;
int zero = 0;
int var_14 = 649393973;
int var_15 = -2086857756;
short var_16 = (short)2099;
unsigned char var_17 = (unsigned char)184;
unsigned char var_18 = (unsigned char)159;
short var_19 = (short)-22772;
int var_20 = -631887181;
unsigned char var_21 = (unsigned char)74;
unsigned char var_22 = (unsigned char)182;
short var_23 = (short)31729;
int var_24 = -1795858622;
short var_25 = (short)19883;
int var_26 = -1332339669;
short var_27 = (short)10968;
short var_28 = (short)-16415;
unsigned char var_29 = (unsigned char)95;
short var_30 = (short)11003;
short arr_0 [14] [14] ;
short arr_1 [14] [14] ;
short arr_2 [14] ;
int arr_4 [14] [14] [14] ;
unsigned char arr_6 [14] [14] [14] ;
int arr_8 [14] ;
short arr_9 [11] [11] ;
unsigned char arr_10 [11] ;
short arr_11 [11] [11] ;
short arr_18 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)32409 : (short)3232;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-24446 : (short)27765;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-23412 : (short)476;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1090337413 : -1346124305;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)29 : (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1031341726 : -1991759154;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (short)14605;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (short)9366;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = (short)-18924;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
