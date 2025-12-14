#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -2110005413;
long long int var_2 = 5177234342675934785LL;
short var_3 = (short)11439;
unsigned short var_4 = (unsigned short)39726;
long long int var_6 = 3851803880833496347LL;
signed char var_8 = (signed char)-125;
short var_10 = (short)-28316;
int zero = 0;
unsigned long long int var_11 = 4333675045684230616ULL;
unsigned short var_12 = (unsigned short)49268;
unsigned short var_13 = (unsigned short)44916;
unsigned char var_14 = (unsigned char)38;
long long int var_15 = 153749142099703273LL;
unsigned int var_16 = 93350690U;
unsigned short var_17 = (unsigned short)40360;
_Bool var_18 = (_Bool)0;
long long int var_19 = -5915764684235848792LL;
unsigned short arr_0 [20] ;
int arr_1 [20] [20] ;
signed char arr_4 [16] ;
unsigned int arr_8 [16] [16] ;
_Bool arr_10 [16] [16] [16] ;
_Bool arr_11 [16] [16] [16] [16] ;
long long int arr_2 [20] ;
signed char arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)39412;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = -1805626057;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = 2189774708U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 4098624710505426852LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (signed char)-26;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
