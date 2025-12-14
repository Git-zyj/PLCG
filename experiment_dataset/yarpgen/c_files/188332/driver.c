#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6251021229653257894LL;
long long int var_3 = -7884831320455133813LL;
int var_4 = 314962565;
unsigned long long int var_10 = 5284823695356311274ULL;
unsigned long long int var_11 = 1179492753889881889ULL;
unsigned char var_15 = (unsigned char)17;
int zero = 0;
unsigned int var_16 = 2891757986U;
long long int var_17 = 4885100832112643992LL;
short var_18 = (short)-22967;
unsigned char var_19 = (unsigned char)81;
signed char var_20 = (signed char)-18;
long long int var_21 = -8281553911643639978LL;
unsigned short var_22 = (unsigned short)42064;
unsigned int var_23 = 3219333432U;
unsigned long long int var_24 = 11663661439938576297ULL;
unsigned long long int arr_2 [19] ;
int arr_4 [19] ;
unsigned short arr_8 [19] [19] [19] [19] ;
unsigned long long int arr_10 [19] [19] [19] ;
signed char arr_11 [19] [19] [19] ;
unsigned long long int arr_17 [14] [14] ;
unsigned char arr_18 [14] [14] [14] ;
unsigned int arr_19 [14] ;
unsigned short arr_24 [22] ;
unsigned int arr_6 [19] [19] ;
long long int arr_13 [19] [19] [19] [19] ;
unsigned char arr_16 [14] [14] ;
unsigned char arr_21 [14] [14] [14] ;
unsigned long long int arr_22 [14] [14] ;
unsigned long long int arr_30 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 12523157169874471840ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 766139806;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)31407;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 16921612949137250659ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_17 [i_0] [i_1] = 4390712024746352874ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)119 : (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = 3999306370U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = (unsigned short)4627;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 3412154754U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 5807102511640768682LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)199 : (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)250 : (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? 12833801387452891954ULL : 15483196925706092227ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 10862358865281979040ULL : 7955835026559677541ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
