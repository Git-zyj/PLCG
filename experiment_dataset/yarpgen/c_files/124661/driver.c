#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)3965;
_Bool var_9 = (_Bool)0;
unsigned int var_12 = 726988908U;
unsigned int var_14 = 137029879U;
int var_15 = 635352854;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-70;
int zero = 0;
int var_19 = -1202251941;
int var_20 = -500279719;
int var_21 = -1910074788;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-6765;
unsigned int var_24 = 4102671688U;
_Bool var_25 = (_Bool)0;
short var_26 = (short)22099;
_Bool arr_0 [15] ;
_Bool arr_1 [15] ;
int arr_3 [15] ;
unsigned int arr_7 [15] [15] [15] [15] [15] ;
_Bool arr_9 [15] [15] [15] [15] ;
signed char arr_11 [15] ;
unsigned long long int arr_14 [14] ;
unsigned char arr_15 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = -141036116;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 4157141793U : 3809001773U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = 1432473850234931244ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (unsigned char)125;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
