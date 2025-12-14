#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)140;
int var_4 = -575106855;
long long int var_7 = 2930863807652490031LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)227;
long long int var_16 = -5384891076327648865LL;
unsigned int var_17 = 1819540907U;
int var_18 = -734712907;
signed char var_19 = (signed char)123;
long long int var_20 = 1112718375399108742LL;
unsigned short var_21 = (unsigned short)18954;
unsigned long long int var_22 = 16513029396434300248ULL;
signed char var_23 = (signed char)-2;
signed char arr_0 [21] [21] ;
signed char arr_1 [21] ;
long long int arr_3 [17] ;
unsigned int arr_4 [17] ;
long long int arr_7 [17] [17] [17] ;
unsigned char arr_21 [21] ;
signed char arr_2 [21] [21] ;
signed char arr_17 [16] [16] ;
int arr_18 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 5365809627007452502LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 1981050277U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 2293361270303842012LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_18 [i_0] [i_1] = -956421323;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
