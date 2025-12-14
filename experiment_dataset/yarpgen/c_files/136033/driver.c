#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 1953264792U;
long long int var_3 = 2053578449348291250LL;
unsigned short var_4 = (unsigned short)41017;
unsigned long long int var_5 = 15945140873865300079ULL;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)206;
int var_8 = 615953714;
unsigned int var_9 = 4024619030U;
long long int var_10 = -5977462304285593800LL;
int zero = 0;
unsigned int var_11 = 1914677547U;
signed char var_12 = (signed char)72;
int var_13 = -511873731;
_Bool var_14 = (_Bool)1;
int var_15 = 623945794;
signed char var_16 = (signed char)-118;
unsigned int var_17 = 2872543246U;
_Bool arr_0 [12] ;
unsigned int arr_1 [12] [12] ;
unsigned char arr_2 [12] [12] [12] ;
signed char arr_3 [12] [12] ;
unsigned long long int arr_4 [12] ;
_Bool arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 3654824658U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)182 : (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-1 : (signed char)-2;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 5722995177688874752ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
