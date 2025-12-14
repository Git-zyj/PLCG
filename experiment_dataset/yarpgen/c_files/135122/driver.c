#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2668565316U;
short var_1 = (short)-25518;
short var_2 = (short)14192;
short var_3 = (short)-18955;
short var_4 = (short)-13626;
unsigned short var_5 = (unsigned short)29864;
unsigned short var_6 = (unsigned short)10812;
short var_7 = (short)-11788;
short var_8 = (short)4437;
unsigned short var_9 = (unsigned short)1901;
long long int var_10 = 108349799360771896LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)61987;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2193794053U;
short arr_0 [12] ;
unsigned int arr_1 [12] [12] ;
_Bool arr_2 [12] ;
_Bool arr_3 [12] ;
unsigned short arr_4 [12] ;
int arr_5 [12] [12] [12] ;
short arr_6 [12] [12] [12] [12] ;
int arr_7 [12] [12] [12] ;
short arr_8 [12] [12] [12] [12] ;
_Bool arr_9 [12] ;
long long int arr_10 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)-11230;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 63125975U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned short)50157;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -128367582;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)3454;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 1755043199;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)21979;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 3197352912337133204LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
