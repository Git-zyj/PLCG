#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8067494301911815986ULL;
unsigned long long int var_5 = 4157784578402856577ULL;
int zero = 0;
unsigned long long int var_14 = 17908761992110739286ULL;
int var_15 = -1877603815;
unsigned short var_16 = (unsigned short)11579;
long long int var_17 = 6909543097909790255LL;
unsigned long long int var_18 = 16347483105948545570ULL;
unsigned short var_19 = (unsigned short)29469;
long long int var_20 = 682328262998746811LL;
unsigned long long int var_21 = 2488833399343938689ULL;
unsigned short var_22 = (unsigned short)33100;
int var_23 = -271112163;
int var_24 = 351682143;
int var_25 = -1891910753;
short var_26 = (short)15429;
long long int var_27 = 3629925280729329681LL;
int var_28 = 1237040553;
long long int arr_0 [16] ;
int arr_1 [16] [16] ;
unsigned short arr_2 [16] [16] ;
unsigned short arr_3 [16] ;
unsigned long long int arr_4 [16] [16] ;
int arr_5 [16] [16] [16] [16] ;
int arr_9 [16] [16] ;
int arr_13 [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 8276478010748066523LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 200763449;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)40673;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)40580;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 17046805903221537793ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1832203155 : -1411199886;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 1694412530 : -349905160;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = -1985784555;
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
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
