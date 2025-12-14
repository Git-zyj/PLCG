#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2729333022315186880ULL;
int var_1 = 1599170503;
unsigned long long int var_2 = 11651720451920237067ULL;
signed char var_3 = (signed char)113;
unsigned long long int var_4 = 1175519271562862511ULL;
signed char var_5 = (signed char)-38;
unsigned char var_8 = (unsigned char)230;
unsigned long long int var_10 = 15635743847768955861ULL;
unsigned int var_12 = 440364573U;
long long int var_15 = 1496630054343690552LL;
long long int var_16 = 1224106885624759182LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)84;
int var_20 = 2086255845;
signed char var_21 = (signed char)98;
unsigned int var_22 = 681004119U;
unsigned char arr_0 [14] ;
_Bool arr_1 [14] [14] ;
short arr_2 [14] ;
unsigned int arr_3 [14] ;
int arr_4 [14] ;
unsigned int arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)9861 : (short)-10659;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3286351812U : 1447802983U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -322848609 : 189676216;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 358509183U : 1335087481U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
