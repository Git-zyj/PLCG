#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1223720020;
unsigned char var_1 = (unsigned char)111;
signed char var_2 = (signed char)60;
unsigned char var_4 = (unsigned char)173;
unsigned int var_6 = 3600369168U;
unsigned long long int var_7 = 9692560074959082134ULL;
_Bool var_8 = (_Bool)1;
long long int var_9 = 2717110070435565800LL;
unsigned short var_12 = (unsigned short)41859;
short var_13 = (short)-29730;
unsigned int var_16 = 704563730U;
int zero = 0;
unsigned long long int var_19 = 2870094446966308573ULL;
int var_20 = 499983883;
unsigned char var_21 = (unsigned char)87;
unsigned char var_22 = (unsigned char)162;
short var_23 = (short)-12017;
short arr_0 [19] [19] ;
unsigned int arr_1 [19] ;
unsigned short arr_2 [19] [19] ;
unsigned short arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (short)138;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 3992097900U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)8740;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)50857;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
