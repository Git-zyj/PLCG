#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = 9078296860630340357LL;
long long int var_4 = 5842828208929575826LL;
unsigned short var_5 = (unsigned short)64138;
unsigned short var_6 = (unsigned short)62027;
signed char var_7 = (signed char)-42;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 11616749458655748289ULL;
int zero = 0;
short var_11 = (short)3775;
short var_12 = (short)-9255;
short var_13 = (short)-14313;
unsigned long long int var_14 = 3285747419724866635ULL;
signed char var_15 = (signed char)110;
unsigned long long int var_16 = 18357113345664376165ULL;
long long int var_17 = -6648542263641995479LL;
unsigned long long int var_18 = 15404485504913900144ULL;
long long int var_19 = -3154919408872804049LL;
signed char var_20 = (signed char)-47;
short var_21 = (short)18423;
unsigned long long int var_22 = 1794603847841155810ULL;
int var_23 = -1536165771;
_Bool var_24 = (_Bool)1;
long long int var_25 = -2835522593072474856LL;
unsigned short var_26 = (unsigned short)64944;
signed char var_27 = (signed char)102;
short arr_1 [21] ;
int arr_3 [21] ;
signed char arr_5 [21] [21] [21] [21] ;
unsigned int arr_8 [21] [21] [21] [21] [21] ;
short arr_10 [21] [21] [21] [21] [21] [21] [21] ;
short arr_11 [21] [21] ;
_Bool arr_14 [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)13827 : (short)-10902;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -381500666;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = 3048797080U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)23993;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (short)17862;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
}

void checksum() {
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
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
