#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7592;
long long int var_3 = 8025183442434479037LL;
short var_5 = (short)18412;
long long int var_9 = 7520068071900511315LL;
_Bool var_13 = (_Bool)1;
long long int var_14 = -1021499176299528160LL;
_Bool var_16 = (_Bool)0;
short var_18 = (short)23732;
int zero = 0;
unsigned char var_20 = (unsigned char)3;
signed char var_21 = (signed char)-98;
unsigned int var_22 = 2639622805U;
int var_23 = -556550270;
signed char var_24 = (signed char)-110;
short var_25 = (short)-5071;
unsigned char var_26 = (unsigned char)72;
unsigned int arr_0 [11] ;
int arr_1 [11] ;
long long int arr_5 [11] [11] [11] ;
short arr_8 [11] ;
short arr_10 [11] [11] [11] [11] ;
unsigned int arr_12 [11] ;
int arr_13 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 2302184653U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1951271089;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 6408248985243989564LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)-21475 : (short)-6936;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (short)25054;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 2267525577U : 3893465786U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -1877394389 : -1627814836;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
