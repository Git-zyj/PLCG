#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)91;
unsigned char var_2 = (unsigned char)221;
_Bool var_3 = (_Bool)0;
long long int var_4 = -697091624759092296LL;
unsigned int var_5 = 1442135674U;
unsigned short var_7 = (unsigned short)6987;
unsigned int var_8 = 3503099818U;
long long int var_9 = -5038381595480310588LL;
unsigned int var_10 = 2329741225U;
unsigned short var_11 = (unsigned short)26196;
unsigned char var_12 = (unsigned char)203;
int zero = 0;
unsigned long long int var_15 = 3432135259709613905ULL;
unsigned int var_16 = 2487828312U;
unsigned short var_17 = (unsigned short)58064;
int var_18 = 867429642;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2197873417U;
unsigned char var_21 = (unsigned char)221;
unsigned char var_22 = (unsigned char)254;
unsigned char var_23 = (unsigned char)208;
unsigned short var_24 = (unsigned short)38490;
unsigned long long int arr_1 [12] [12] ;
unsigned short arr_3 [12] ;
int arr_14 [11] ;
unsigned short arr_23 [14] ;
long long int arr_4 [12] ;
unsigned short arr_5 [12] ;
unsigned char arr_8 [11] [11] ;
int arr_15 [11] [11] [11] ;
unsigned long long int arr_21 [11] ;
signed char arr_22 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 3810146336176175001ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)21440 : (unsigned short)60777;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 267799102 : -2146902956;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_23 [i_0] = (unsigned short)8596;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 6346162263208338789LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned short)28765;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)138 : (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2127329498 : 11899389;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 10955902098990484683ULL : 5891842431523678114ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (signed char)-61 : (signed char)100;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
