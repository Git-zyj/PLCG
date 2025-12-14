#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-126;
unsigned long long int var_1 = 5980264237813507729ULL;
unsigned long long int var_2 = 14363123975528197948ULL;
unsigned int var_4 = 2576546138U;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)93;
signed char var_7 = (signed char)-32;
unsigned char var_10 = (unsigned char)206;
int var_11 = 551689947;
short var_12 = (short)-1301;
unsigned long long int var_13 = 5854548471034527992ULL;
unsigned int var_16 = 3291227215U;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
int var_19 = 385680799;
long long int var_20 = -2267219844556974181LL;
int var_21 = 1685521300;
unsigned long long int var_22 = 4044724448910942150ULL;
int var_23 = 1179252329;
signed char var_24 = (signed char)-54;
long long int var_25 = -2685243792657360884LL;
signed char var_26 = (signed char)65;
unsigned int arr_0 [21] [21] ;
short arr_1 [21] [21] ;
short arr_2 [21] [21] ;
short arr_6 [14] ;
long long int arr_7 [14] ;
_Bool arr_5 [10] [10] ;
long long int arr_8 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 1951206370U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (short)20702;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-23400;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (short)-19238;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = -252118746386630784LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 5834282037737290235LL : -7640766777114508325LL;
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
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
