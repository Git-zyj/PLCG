#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48415;
signed char var_2 = (signed char)-123;
unsigned char var_4 = (unsigned char)91;
short var_5 = (short)2485;
int var_6 = 476710782;
int var_7 = 780926311;
unsigned int var_8 = 1804941321U;
unsigned char var_9 = (unsigned char)178;
long long int var_10 = 5829101987557268513LL;
long long int var_11 = -1629917715876810211LL;
short var_13 = (short)3975;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-112;
long long int var_16 = -953016972170433288LL;
long long int var_17 = 6895130696876519982LL;
int var_18 = 259841486;
int var_19 = 1956631471;
unsigned short var_20 = (unsigned short)19888;
int var_21 = 235705134;
unsigned int var_22 = 2195830527U;
unsigned char arr_0 [24] ;
int arr_1 [24] [24] ;
int arr_3 [10] [10] ;
int arr_5 [10] [10] ;
int arr_9 [12] ;
int arr_10 [12] [12] ;
signed char arr_12 [13] [13] ;
int arr_13 [13] [13] ;
signed char arr_14 [13] [13] ;
signed char arr_15 [13] [13] ;
unsigned long long int arr_20 [13] ;
long long int arr_2 [24] ;
unsigned char arr_7 [10] ;
_Bool arr_8 [10] [10] ;
unsigned short arr_11 [12] ;
unsigned int arr_16 [13] [13] ;
signed char arr_17 [13] [13] ;
short arr_18 [13] ;
signed char arr_22 [13] ;
long long int arr_23 [13] ;
int arr_24 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 774718558;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = -694003800;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 168497292;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 712765608;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = 1874792440;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = -451646873;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = 394276383498621253ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -5857098588880597984LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)25980 : (unsigned short)60747;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = 3786178202U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (short)-11060;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = 5697315298200504526LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_24 [i_0] = 1139602598;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
