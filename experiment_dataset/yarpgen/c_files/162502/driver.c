#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16794115983598365536ULL;
int var_3 = -124679023;
int var_4 = -959000743;
unsigned long long int var_5 = 5098949175258610070ULL;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 1744361398627635696ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-43;
unsigned int var_12 = 341810885U;
signed char var_13 = (signed char)-79;
signed char var_14 = (signed char)69;
int var_15 = -573171143;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)24895;
unsigned int var_18 = 1895531148U;
int var_19 = 1394377513;
unsigned char var_20 = (unsigned char)93;
signed char var_21 = (signed char)-49;
short var_22 = (short)-30994;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 6104284576189533236ULL;
unsigned char var_25 = (unsigned char)91;
unsigned short arr_1 [24] [24] ;
unsigned int arr_2 [24] [24] ;
signed char arr_3 [24] [24] [24] ;
unsigned short arr_5 [25] ;
unsigned short arr_6 [25] ;
int arr_7 [25] ;
unsigned short arr_8 [25] ;
_Bool arr_9 [25] [25] [25] ;
unsigned char arr_15 [19] ;
short arr_10 [25] [25] ;
int arr_14 [18] ;
unsigned short arr_17 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)63604;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 1603888307U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned short)5241;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned short)50370;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = -536842876;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (unsigned short)64279;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (short)24604;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = 1513548327;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (unsigned short)35819;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
