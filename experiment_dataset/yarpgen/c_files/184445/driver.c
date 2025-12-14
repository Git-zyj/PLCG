#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)93;
unsigned char var_1 = (unsigned char)57;
_Bool var_2 = (_Bool)0;
int var_4 = 399344571;
_Bool var_7 = (_Bool)1;
int var_10 = 911798025;
unsigned short var_11 = (unsigned short)12341;
unsigned int var_13 = 2806180943U;
unsigned char var_14 = (unsigned char)145;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 7489767536174472897ULL;
unsigned long long int var_19 = 3575112404054314513ULL;
unsigned int var_20 = 597953753U;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 4166475106U;
_Bool var_23 = (_Bool)0;
_Bool arr_0 [21] ;
_Bool arr_1 [21] [21] ;
unsigned long long int arr_2 [21] [21] ;
unsigned char arr_4 [21] [21] ;
_Bool arr_6 [21] ;
_Bool arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 3563122396583808851ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
