#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
unsigned char var_1 = (unsigned char)133;
long long int var_3 = 4238514177087364526LL;
int var_4 = 401240309;
unsigned short var_5 = (unsigned short)25208;
long long int var_7 = 2103665701605176380LL;
unsigned short var_8 = (unsigned short)29318;
unsigned char var_10 = (unsigned char)54;
int zero = 0;
unsigned long long int var_12 = 18075650582215116898ULL;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-4809;
unsigned int var_15 = 3456949366U;
unsigned long long int var_16 = 14206931950940174262ULL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 3524533874267999442ULL;
long long int var_19 = 3957599343784020665LL;
signed char var_20 = (signed char)70;
long long int var_21 = -4198842951677892771LL;
unsigned char var_22 = (unsigned char)199;
unsigned long long int var_23 = 13714410962144363111ULL;
signed char var_24 = (signed char)-61;
signed char var_25 = (signed char)-123;
long long int var_26 = -2325585804471364598LL;
unsigned long long int var_27 = 16904260084179413992ULL;
unsigned char arr_0 [22] ;
int arr_2 [22] ;
signed char arr_5 [22] ;
int arr_6 [22] [22] ;
long long int arr_8 [22] [22] ;
_Bool arr_9 [22] [22] [22] ;
unsigned int arr_10 [22] [22] ;
unsigned char arr_17 [17] [17] ;
long long int arr_18 [17] ;
unsigned long long int arr_22 [17] [17] [17] ;
unsigned char arr_35 [17] [17] [17] [17] ;
unsigned short arr_36 [17] [17] [17] [17] ;
long long int arr_42 [23] ;
_Bool arr_44 [23] ;
long long int arr_45 [23] [23] [23] ;
unsigned short arr_46 [23] [23] [23] ;
unsigned char arr_12 [22] ;
short arr_13 [22] [22] [22] [22] ;
unsigned char arr_14 [22] ;
unsigned long long int arr_19 [17] [17] ;
unsigned int arr_24 [17] [17] [17] ;
signed char arr_28 [17] [17] ;
unsigned long long int arr_32 [17] [17] ;
unsigned short arr_37 [17] ;
unsigned short arr_40 [17] ;
short arr_41 [17] ;
long long int arr_50 [23] [23] [23] [23] ;
int arr_51 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1229672089 : 10263054;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 1862560783;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? -5145109995752718246LL : 4123284574888160123LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 197225487U : 2761228512U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = 8619411678566974885LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3734715733210719651ULL : 17195564471233344032ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (unsigned short)57907;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_42 [i_0] = 3663052291830618083LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_44 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 7933911234962083147LL : -2848153634868654551LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (unsigned short)43922;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)44 : (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)8141 : (short)3946;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)164 : (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? 9126470361002859584ULL : 3414177030063876237ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2556116508U : 638340444U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-36 : (signed char)113;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_32 [i_0] [i_1] = (i_1 % 2 == 0) ? 3220226753005720649ULL : 16145745546353573883ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? (unsigned short)44166 : (unsigned short)33427;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_40 [i_0] = (i_0 % 2 == 0) ? (unsigned short)42889 : (unsigned short)12000;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_41 [i_0] = (i_0 % 2 == 0) ? (short)-24589 : (short)-32226;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_50 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2096279954709628333LL : -4706003329459509755LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_51 [i_0] = 2143065377;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_50 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_51 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
