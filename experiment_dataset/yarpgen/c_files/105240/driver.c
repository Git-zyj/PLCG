#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)1658;
short var_4 = (short)-25299;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 8147312926132619665ULL;
short var_10 = (short)-11696;
unsigned long long int var_12 = 7520399537091826775ULL;
unsigned long long int var_13 = 3463944568605904120ULL;
unsigned long long int var_14 = 14137906449396924593ULL;
long long int var_15 = -3992219046777891235LL;
int var_16 = 1644877905;
int zero = 0;
signed char var_18 = (signed char)106;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)12453;
long long int var_21 = -7945315322420138031LL;
signed char var_22 = (signed char)106;
unsigned short var_23 = (unsigned short)12644;
int var_24 = 1831545751;
_Bool arr_0 [22] ;
signed char arr_1 [22] ;
signed char arr_2 [22] [22] ;
short arr_4 [22] [22] ;
signed char arr_10 [22] ;
unsigned long long int arr_5 [22] [22] ;
int arr_12 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-26944;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 14559673103611191669ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? -1924987537 : -827942659;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
