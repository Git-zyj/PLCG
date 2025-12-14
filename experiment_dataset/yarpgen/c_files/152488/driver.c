#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)218;
unsigned short var_3 = (unsigned short)50541;
long long int var_5 = -6608546367292509734LL;
unsigned char var_6 = (unsigned char)71;
unsigned int var_8 = 4020407131U;
unsigned long long int var_17 = 17665382742811956113ULL;
int zero = 0;
unsigned int var_20 = 2605731023U;
unsigned char var_21 = (unsigned char)184;
int var_22 = 629566155;
long long int var_23 = 3351079053510243135LL;
unsigned char var_24 = (unsigned char)7;
unsigned short var_25 = (unsigned short)22239;
unsigned long long int var_26 = 13588416904694142528ULL;
unsigned short var_27 = (unsigned short)29748;
unsigned char var_28 = (unsigned char)108;
long long int var_29 = 2001128140952444274LL;
unsigned char var_30 = (unsigned char)88;
unsigned int var_31 = 3853432933U;
long long int var_32 = 7593441817054682112LL;
unsigned short var_33 = (unsigned short)37591;
unsigned long long int var_34 = 4972355214875305854ULL;
long long int arr_0 [18] ;
int arr_3 [22] ;
unsigned char arr_6 [22] [22] ;
unsigned char arr_9 [22] [22] [22] ;
unsigned short arr_10 [22] [22] [22] ;
int arr_12 [22] ;
unsigned int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -1157053252300557662LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -374281970;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)19828 : (unsigned short)16161;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = -1487331652;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1712397902U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
