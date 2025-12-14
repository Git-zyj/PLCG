#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_15 = (short)-28656;
unsigned long long int var_16 = 9927896079665292046ULL;
signed char var_18 = (signed char)80;
int zero = 0;
unsigned int var_19 = 1840119145U;
unsigned char var_20 = (unsigned char)136;
int var_21 = 222705979;
unsigned int var_22 = 2898968423U;
unsigned char var_23 = (unsigned char)141;
unsigned char var_24 = (unsigned char)150;
_Bool arr_0 [14] ;
short arr_5 [17] ;
_Bool arr_6 [17] ;
unsigned int arr_7 [17] ;
long long int arr_9 [17] ;
short arr_14 [17] [17] [17] [17] ;
long long int arr_3 [14] ;
signed char arr_19 [17] [17] ;
unsigned char arr_20 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (short)-13259;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1414423401U : 1029101046U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 757338450292161195LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)23845 : (short)-9942;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -9108648512393009877LL : -3392488528270682872LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)30 : (signed char)-54;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = (unsigned char)175;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
