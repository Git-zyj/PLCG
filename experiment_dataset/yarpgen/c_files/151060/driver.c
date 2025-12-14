#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11220;
int var_2 = 1354089080;
unsigned int var_3 = 1190251005U;
long long int var_4 = -1254209384577912900LL;
long long int var_5 = 4546110573417626511LL;
unsigned int var_6 = 3837908057U;
unsigned int var_7 = 3666973937U;
unsigned int var_8 = 3354334028U;
short var_9 = (short)15604;
short var_10 = (short)-31456;
unsigned short var_11 = (unsigned short)15990;
int var_13 = 12796356;
int zero = 0;
short var_14 = (short)-1043;
unsigned int var_15 = 796812347U;
short var_16 = (short)5691;
short var_17 = (short)-23918;
unsigned short var_18 = (unsigned short)60451;
short var_19 = (short)11038;
unsigned short var_20 = (unsigned short)47819;
long long int var_21 = 8443477817648501697LL;
short var_22 = (short)23517;
int var_23 = -892190715;
short var_24 = (short)-29149;
short var_25 = (short)-18003;
unsigned short var_26 = (unsigned short)34637;
short var_27 = (short)-6268;
long long int arr_2 [11] ;
int arr_3 [11] ;
short arr_4 [11] [11] [11] ;
long long int arr_7 [11] [11] [11] [11] ;
unsigned char arr_12 [20] [20] ;
int arr_13 [20] ;
unsigned int arr_15 [20] ;
unsigned int arr_16 [20] [20] [20] ;
unsigned char arr_17 [20] [20] [20] ;
unsigned char arr_20 [21] ;
short arr_21 [21] ;
unsigned int arr_22 [21] [21] ;
short arr_24 [21] [21] [21] ;
unsigned int arr_27 [21] [21] [21] ;
short arr_28 [21] [21] [21] ;
unsigned int arr_29 [21] [21] ;
short arr_30 [21] [21] ;
short arr_34 [21] [21] ;
unsigned short arr_36 [21] ;
long long int arr_37 [21] ;
long long int arr_9 [11] ;
short arr_10 [11] [11] ;
short arr_19 [20] [20] ;
short arr_31 [21] ;
unsigned short arr_32 [21] ;
unsigned char arr_33 [21] ;
unsigned short arr_38 [21] ;
unsigned int arr_39 [21] ;
unsigned short arr_42 [13] ;
unsigned char arr_45 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 3447314433822349088LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 876436328;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-18460;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -4060417708358197684LL : -8914983825012340361LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = 1341690300;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = 3355407398U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 196633760U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = (short)-26782;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_22 [i_0] [i_1] = 1621024984U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (short)-30173;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 1656909949U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (short)-28520;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_29 [i_0] [i_1] = 3825699350U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_30 [i_0] [i_1] = (short)-8798;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_34 [i_0] [i_1] = (short)-16334;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_36 [i_0] = (unsigned short)50851;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_37 [i_0] = 3699692152761173035LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -465816296202456297LL : -5983089868045410954LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-21369 : (short)10596;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_19 [i_0] [i_1] = (short)19480;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_31 [i_0] = (short)2537;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_32 [i_0] = (unsigned short)6587;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_33 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_38 [i_0] = (unsigned short)65150;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_39 [i_0] = 2884840428U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_42 [i_0] = (unsigned short)32372;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_45 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)201 : (unsigned char)20;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_45 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
