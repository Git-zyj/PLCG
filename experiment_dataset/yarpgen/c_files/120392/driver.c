#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46086;
short var_3 = (short)-14892;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 16880060U;
unsigned long long int var_6 = 15465843928900063701ULL;
unsigned short var_7 = (unsigned short)37135;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)16253;
int zero = 0;
int var_13 = 642018469;
long long int var_14 = 269249564458082647LL;
signed char var_15 = (signed char)-19;
long long int var_16 = -1675065143608050388LL;
unsigned short var_17 = (unsigned short)59196;
unsigned short var_18 = (unsigned short)47970;
_Bool var_19 = (_Bool)0;
long long int var_20 = 2010517119554268995LL;
long long int var_21 = 824405351217978180LL;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 3410291211084058564ULL;
unsigned short arr_0 [24] [24] ;
unsigned int arr_1 [24] ;
short arr_2 [24] ;
unsigned long long int arr_3 [24] [24] [24] ;
_Bool arr_5 [24] [24] ;
_Bool arr_8 [24] ;
int arr_10 [24] ;
short arr_7 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)45880;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 3083346353U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)31753;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 11011190567201110529ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 2109785033;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)26993;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
