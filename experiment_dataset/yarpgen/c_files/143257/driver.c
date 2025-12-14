#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5493687716702399467LL;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-36;
int var_4 = 1689143300;
unsigned long long int var_6 = 11640045413107772122ULL;
int var_8 = -574755775;
int var_11 = 953854864;
int var_13 = 1750783534;
unsigned int var_15 = 1208424561U;
signed char var_18 = (signed char)2;
int zero = 0;
unsigned long long int var_20 = 15427847139928019563ULL;
unsigned int var_21 = 312935283U;
long long int var_22 = 5743400650246220401LL;
signed char var_23 = (signed char)-49;
unsigned int arr_2 [11] [11] ;
unsigned int arr_3 [11] [11] [11] ;
unsigned int arr_5 [11] [11] [11] ;
signed char arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 660277181U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3190659301U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3897659151U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (signed char)-79;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
