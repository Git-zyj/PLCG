#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)208;
signed char var_6 = (signed char)-27;
_Bool var_8 = (_Bool)1;
signed char var_11 = (signed char)0;
int zero = 0;
signed char var_16 = (signed char)33;
unsigned char var_17 = (unsigned char)31;
short var_18 = (short)-17018;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)42303;
int arr_0 [16] [16] ;
unsigned long long int arr_1 [16] [16] ;
unsigned long long int arr_2 [16] ;
unsigned char arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 584095212;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 13330469228345100567ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 9517125677744084350ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)106;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
