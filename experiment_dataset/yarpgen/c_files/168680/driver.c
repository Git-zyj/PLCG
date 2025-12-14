#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3687327140790184060LL;
unsigned short var_3 = (unsigned short)14056;
unsigned long long int var_4 = 16465300831473273962ULL;
unsigned long long int var_5 = 946787448909196313ULL;
short var_6 = (short)-17078;
unsigned int var_7 = 1313957643U;
signed char var_9 = (signed char)54;
signed char var_11 = (signed char)70;
unsigned long long int var_12 = 16007358392467938764ULL;
unsigned short var_14 = (unsigned short)1642;
signed char var_15 = (signed char)-32;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)2078;
unsigned int var_21 = 3418400449U;
_Bool var_22 = (_Bool)1;
_Bool arr_0 [20] ;
_Bool arr_1 [20] ;
unsigned short arr_2 [20] ;
unsigned long long int arr_3 [20] [20] ;
unsigned int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)3468;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 6653340398286376103ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 1949276354U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
