#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -396877567;
int var_1 = -1033540726;
unsigned int var_4 = 3366296266U;
short var_5 = (short)-30694;
unsigned char var_6 = (unsigned char)233;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)65440;
unsigned short var_9 = (unsigned short)12924;
signed char var_10 = (signed char)7;
unsigned short var_11 = (unsigned short)32789;
signed char var_13 = (signed char)90;
signed char var_14 = (signed char)24;
int zero = 0;
unsigned int var_15 = 403144933U;
unsigned int var_16 = 982065175U;
long long int var_17 = -2992149490972579917LL;
long long int var_18 = -6684719710965424127LL;
unsigned int var_19 = 774231243U;
long long int var_20 = -5674706112417405594LL;
unsigned char var_21 = (unsigned char)95;
unsigned short var_22 = (unsigned short)34516;
unsigned int var_23 = 3074874158U;
long long int var_24 = 3698744957701531472LL;
int var_25 = 1671152428;
signed char var_26 = (signed char)-93;
long long int arr_0 [11] ;
unsigned int arr_4 [11] [11] [11] ;
unsigned long long int arr_6 [11] [11] [11] ;
unsigned int arr_8 [11] [11] [11] ;
unsigned short arr_14 [20] [20] ;
unsigned int arr_15 [20] [20] ;
long long int arr_16 [20] ;
signed char arr_17 [20] [20] ;
signed char arr_18 [20] ;
long long int arr_22 [15] ;
unsigned char arr_2 [11] ;
signed char arr_12 [11] ;
unsigned int arr_13 [11] [11] ;
unsigned long long int arr_19 [20] [20] [20] ;
unsigned int arr_20 [20] [20] [20] ;
unsigned int arr_23 [15] ;
int arr_24 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -3500456388686483161LL : -498390212067992794LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2017853630U : 2642777661U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 13577179371748707132ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 439381378U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)46550;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = 579957901U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = -2802070719819008641LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)1 : (signed char)34;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (signed char)-57 : (signed char)-108;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = -6513314130070949838LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)117 : (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (signed char)-1 : (signed char)-67;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 896186989U : 2423782531U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2330450014850536635ULL : 6869060042233136876ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3485865010U : 3205824584U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = 4264571802U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_24 [i_0] = -444961591;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
