#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -169698534;
signed char var_3 = (signed char)-4;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)0;
int zero = 0;
long long int var_12 = -2015744596971503776LL;
int var_13 = 2043950559;
unsigned int var_14 = 2604749380U;
unsigned short var_15 = (unsigned short)31634;
unsigned long long int var_16 = 7252668904580574030ULL;
unsigned short var_17 = (unsigned short)6825;
unsigned short arr_0 [18] ;
unsigned short arr_1 [18] ;
long long int arr_3 [18] [18] ;
signed char arr_6 [18] [18] [18] ;
int arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)62633;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)35149;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = -1195418551768343613LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 882709253;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
