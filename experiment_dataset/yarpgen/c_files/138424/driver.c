#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)136;
short var_1 = (short)5306;
short var_2 = (short)-7617;
unsigned short var_3 = (unsigned short)3472;
int var_4 = 1439145137;
unsigned int var_5 = 2735417551U;
signed char var_6 = (signed char)-24;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 3179382840U;
unsigned int var_9 = 4065760409U;
short var_10 = (short)14930;
int var_11 = 110407308;
unsigned int var_12 = 2808534628U;
long long int var_13 = -2804720315793438262LL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)62;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_19 = (short)8399;
unsigned short var_20 = (unsigned short)36666;
short var_21 = (short)15458;
short var_22 = (short)-9796;
_Bool var_23 = (_Bool)1;
short arr_0 [24] [24] ;
long long int arr_1 [24] ;
_Bool arr_2 [24] ;
unsigned char arr_3 [24] [24] ;
_Bool arr_4 [24] [24] ;
long long int arr_5 [24] ;
unsigned char arr_6 [24] ;
signed char arr_7 [24] [24] [24] ;
unsigned int arr_9 [24] [24] [24] [24] ;
_Bool arr_11 [24] [24] [24] ;
unsigned short arr_12 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (short)16673;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 5555505982653123463LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 8553769180853841092LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 2571374364U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)30656 : (unsigned short)9870;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
