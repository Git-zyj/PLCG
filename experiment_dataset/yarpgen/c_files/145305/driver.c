#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)35744;
unsigned short var_5 = (unsigned short)56498;
int var_7 = -1692468563;
_Bool var_8 = (_Bool)0;
short var_10 = (short)-31334;
int var_11 = -598962442;
unsigned long long int var_12 = 3693396203857711369ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)22868;
unsigned char var_17 = (unsigned char)91;
unsigned long long int var_18 = 15744768240758368089ULL;
unsigned short var_19 = (unsigned short)52786;
unsigned char var_20 = (unsigned char)205;
unsigned short var_21 = (unsigned short)48072;
unsigned int var_22 = 626347634U;
unsigned short var_23 = (unsigned short)37976;
unsigned int var_24 = 1373358423U;
unsigned short var_25 = (unsigned short)18543;
short arr_0 [16] ;
long long int arr_1 [16] ;
signed char arr_3 [16] [16] ;
int arr_4 [16] [16] ;
unsigned long long int arr_6 [16] ;
short arr_12 [16] [16] [16] ;
short arr_18 [16] ;
short arr_17 [16] ;
unsigned char arr_21 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)-12171;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -3109961860730388568LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 791807057;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 6248476168389992025ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)-21308;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = (short)-11032;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (short)-27001;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned char)33;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
