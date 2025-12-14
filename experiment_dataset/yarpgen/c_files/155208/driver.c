#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = 8342591787392631062LL;
long long int var_3 = 3228364679509172599LL;
signed char var_4 = (signed char)-70;
unsigned int var_5 = 2855576560U;
unsigned int var_6 = 823025644U;
unsigned short var_7 = (unsigned short)40261;
unsigned int var_8 = 2646852594U;
unsigned char var_10 = (unsigned char)104;
int zero = 0;
unsigned long long int var_11 = 14798662666864839264ULL;
unsigned char var_12 = (unsigned char)142;
long long int var_13 = 1741394111013549511LL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 11674862163196888127ULL;
signed char arr_0 [15] ;
unsigned int arr_1 [15] ;
unsigned int arr_2 [15] [15] ;
unsigned int arr_6 [14] ;
long long int arr_8 [14] ;
unsigned char arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 594589614U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 522066139U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 3647247542U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 8175032512154284503LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned char)149;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
