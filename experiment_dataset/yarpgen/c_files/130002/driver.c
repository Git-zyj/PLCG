#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11100213007751509978ULL;
unsigned short var_1 = (unsigned short)61296;
signed char var_2 = (signed char)15;
unsigned long long int var_3 = 11166191730266438444ULL;
unsigned int var_4 = 3001053302U;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-48;
unsigned int var_10 = 21071971U;
unsigned long long int var_11 = 2123973960311958516ULL;
unsigned long long int var_12 = 7968789389014718263ULL;
signed char var_13 = (signed char)-92;
long long int var_14 = 927534803038407583LL;
int zero = 0;
int var_15 = 1827485603;
unsigned int var_16 = 3198654885U;
unsigned char var_17 = (unsigned char)201;
unsigned long long int var_18 = 220307346275902269ULL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 689751527U;
unsigned int var_21 = 1432174623U;
long long int var_22 = 227245685976209920LL;
short var_23 = (short)41;
_Bool arr_0 [25] [25] ;
short arr_1 [25] ;
long long int arr_3 [15] [15] ;
unsigned long long int arr_4 [15] [15] ;
int arr_6 [15] ;
unsigned int arr_12 [16] ;
long long int arr_2 [25] [25] ;
unsigned int arr_7 [15] ;
short arr_11 [16] ;
_Bool arr_14 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)31434;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 1849939826003932819LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 16032906900107757257ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = -138671079;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 1621398076U : 3358502681U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 8561530396229308012LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 2681635473U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (short)-12235;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
