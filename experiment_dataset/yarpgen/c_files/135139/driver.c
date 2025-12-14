#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10495072699799887509ULL;
unsigned long long int var_2 = 4981770313361158478ULL;
unsigned long long int var_3 = 1484328714982751251ULL;
unsigned long long int var_4 = 13292900062945907825ULL;
unsigned long long int var_6 = 2623302738788693909ULL;
unsigned long long int var_9 = 5305184969711056742ULL;
unsigned long long int var_10 = 4896121435468366601ULL;
unsigned long long int var_11 = 6974073122822941790ULL;
int zero = 0;
unsigned long long int var_13 = 17112758788073200756ULL;
unsigned long long int var_14 = 16712832274423631872ULL;
unsigned long long int var_15 = 17292253124431270714ULL;
unsigned long long int var_16 = 9026088030983317087ULL;
unsigned long long int var_17 = 12874629584209758238ULL;
unsigned long long int var_18 = 10447727771463170373ULL;
unsigned long long int arr_0 [25] [25] ;
unsigned long long int arr_1 [25] ;
unsigned long long int arr_3 [25] ;
unsigned long long int arr_4 [25] [25] ;
unsigned long long int arr_8 [25] [25] [25] ;
unsigned long long int arr_2 [25] [25] ;
unsigned long long int arr_5 [25] ;
unsigned long long int arr_11 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 747491639922792089ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 14807914181560589721ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 13068380054022023217ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 653702250061587032ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1930003728691080791ULL : 9862857495512264803ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 11836854399079314969ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 9568273462922196033ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 59471563659646652ULL : 12512289766832826288ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
