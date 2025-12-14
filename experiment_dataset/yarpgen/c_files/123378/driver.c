#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20924;
unsigned short var_2 = (unsigned short)26131;
unsigned char var_10 = (unsigned char)167;
signed char var_13 = (signed char)27;
unsigned int var_14 = 413164772U;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_16 = (short)-24151;
unsigned int var_17 = 2212380673U;
_Bool var_18 = (_Bool)1;
long long int var_19 = 3431473367166114011LL;
signed char var_20 = (signed char)-72;
unsigned int var_21 = 3196934125U;
unsigned char var_22 = (unsigned char)4;
short arr_0 [16] [16] ;
int arr_1 [16] ;
long long int arr_2 [16] ;
_Bool arr_3 [16] ;
unsigned long long int arr_6 [10] ;
short arr_8 [10] ;
unsigned short arr_10 [10] ;
long long int arr_4 [16] ;
int arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-29092;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -1989444412;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -8413838748221759397LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 4630061391982872431ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (short)32733;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (unsigned short)13543;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 2942601353292765190LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = -2028252459;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
