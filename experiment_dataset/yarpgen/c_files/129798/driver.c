#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16263;
unsigned int var_3 = 846946838U;
signed char var_5 = (signed char)49;
unsigned char var_6 = (unsigned char)153;
unsigned char var_8 = (unsigned char)164;
int var_10 = -576981816;
int zero = 0;
unsigned short var_11 = (unsigned short)55362;
short var_12 = (short)8032;
unsigned long long int var_13 = 9348528066242930822ULL;
unsigned short var_14 = (unsigned short)29372;
unsigned char var_15 = (unsigned char)177;
signed char var_16 = (signed char)31;
int var_17 = 1733586167;
signed char var_18 = (signed char)-10;
int var_19 = -1963029844;
int var_20 = -827035765;
signed char var_21 = (signed char)80;
unsigned char var_22 = (unsigned char)254;
unsigned long long int var_23 = 5890684762483780286ULL;
unsigned long long int arr_0 [17] ;
unsigned char arr_1 [17] ;
short arr_5 [11] [11] ;
unsigned short arr_9 [24] ;
unsigned int arr_10 [24] ;
unsigned long long int arr_4 [11] [11] ;
unsigned int arr_11 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 14096490023376988548ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (short)11595;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned short)48748;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 2915323033U : 1691357498U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 13676529550520038377ULL : 11455481680409107957ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 300682094U : 506166191U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
