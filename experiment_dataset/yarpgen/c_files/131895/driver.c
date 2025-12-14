#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1354114543;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)8955;
_Bool var_11 = (_Bool)0;
int var_13 = 1157979336;
long long int var_14 = 8811315500747000496LL;
_Bool var_15 = (_Bool)0;
unsigned short var_17 = (unsigned short)54428;
unsigned int var_18 = 2489543237U;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-57;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 2309856124U;
unsigned int var_25 = 1231421397U;
unsigned int var_26 = 2952884346U;
_Bool var_27 = (_Bool)0;
_Bool var_28 = (_Bool)0;
unsigned long long int var_29 = 17978213000666393956ULL;
unsigned int arr_0 [23] ;
int arr_1 [23] ;
int arr_2 [23] [23] ;
unsigned long long int arr_4 [23] ;
unsigned short arr_5 [23] [23] ;
unsigned long long int arr_7 [23] ;
unsigned short arr_8 [23] ;
_Bool arr_3 [23] [23] ;
signed char arr_12 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 2236333059U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -1808640015;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 1583927820;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 15291134919387749775ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)32122;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 9452196418303570837ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned short)3351;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)8;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
