#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5397;
unsigned char var_2 = (unsigned char)168;
unsigned int var_3 = 1294373996U;
unsigned int var_6 = 803670763U;
unsigned int var_9 = 1643012335U;
int zero = 0;
unsigned short var_10 = (unsigned short)46008;
short var_11 = (short)-10191;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-75;
unsigned int var_14 = 214688255U;
unsigned long long int var_15 = 4357761117324105720ULL;
unsigned int var_16 = 1151553768U;
unsigned long long int var_17 = 6675996972355133666ULL;
unsigned int var_18 = 1607730481U;
_Bool arr_0 [10] ;
long long int arr_1 [10] [10] ;
_Bool arr_4 [12] [12] ;
unsigned char arr_6 [12] ;
unsigned int arr_8 [12] [12] ;
unsigned long long int arr_9 [12] [12] ;
unsigned char arr_11 [12] ;
unsigned int arr_13 [12] [12] ;
_Bool arr_19 [23] ;
unsigned int arr_3 [10] ;
unsigned int arr_14 [12] ;
long long int arr_15 [12] ;
unsigned short arr_16 [12] ;
unsigned int arr_17 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 3779699519509513760LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned char)66;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = 201453043U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = 6489414211327967587ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = 4228124218U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 488407827U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = 25395822U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = 8561494228537405504LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (unsigned short)39566;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = 1328010090U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
