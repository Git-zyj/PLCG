#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)36210;
unsigned int var_4 = 239069733U;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 10111724355465295448ULL;
unsigned short var_8 = (unsigned short)7919;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)246;
int zero = 0;
long long int var_17 = 884007684163843465LL;
unsigned long long int var_18 = 15169129263743250891ULL;
short var_19 = (short)-2135;
int var_20 = 1026446651;
signed char var_21 = (signed char)7;
unsigned char var_22 = (unsigned char)93;
unsigned char var_23 = (unsigned char)192;
long long int var_24 = -1678826993554935203LL;
unsigned long long int var_25 = 514211999221625952ULL;
unsigned int arr_0 [10] [10] ;
_Bool arr_2 [20] ;
signed char arr_3 [20] ;
long long int arr_7 [13] ;
signed char arr_8 [13] ;
int arr_9 [13] ;
long long int arr_4 [20] ;
unsigned long long int arr_11 [13] [13] ;
signed char arr_12 [13] [13] [13] ;
unsigned long long int arr_13 [13] [13] ;
unsigned long long int arr_14 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 1420751119U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = -74368365338166427LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = -220273409;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = -8140325194897753096LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = 4780140574286737984ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = 17401454896871144882ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = 11275374506969707206ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
