#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2008056310U;
unsigned short var_1 = (unsigned short)43041;
signed char var_2 = (signed char)-51;
int var_3 = -1460223516;
unsigned short var_5 = (unsigned short)57462;
long long int var_6 = -6988863958498974682LL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
long long int var_10 = 4518648210489645459LL;
long long int var_11 = -8177982967320723224LL;
_Bool var_12 = (_Bool)1;
unsigned short var_15 = (unsigned short)65159;
unsigned char var_17 = (unsigned char)127;
unsigned short var_18 = (unsigned short)61821;
int zero = 0;
unsigned short var_20 = (unsigned short)34792;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)12167;
unsigned short var_23 = (unsigned short)64000;
long long int var_24 = 5562131930312872968LL;
long long int var_25 = 5285370549549694355LL;
short var_26 = (short)21788;
long long int var_27 = -7142594136203000954LL;
int var_28 = 1935537614;
signed char var_29 = (signed char)99;
long long int var_30 = 5415022846908064764LL;
long long int arr_0 [23] ;
long long int arr_1 [23] ;
unsigned int arr_2 [24] ;
unsigned int arr_4 [24] ;
long long int arr_6 [24] ;
_Bool arr_7 [24] ;
unsigned short arr_8 [24] [24] ;
_Bool arr_13 [17] ;
unsigned int arr_18 [17] [17] ;
long long int arr_22 [17] ;
int arr_23 [17] [17] [17] ;
unsigned char arr_9 [24] ;
short arr_10 [24] [24] ;
long long int arr_11 [24] ;
unsigned long long int arr_19 [17] [17] ;
int arr_20 [17] ;
int arr_24 [17] [17] ;
short arr_25 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 3623705892600529985LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 952788915224089749LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 3449107464U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 2397724360U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = -3713236672710956127LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)57463;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_18 [i_0] [i_1] = 1666217685U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_22 [i_0] = -2703323863787521064LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 838152419;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-10596;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = 4130618251748754565LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_19 [i_0] [i_1] = 7205600804885658340ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = -2051911261;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_24 [i_0] [i_1] = -1140399887;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_25 [i_0] [i_1] = (short)29560;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
