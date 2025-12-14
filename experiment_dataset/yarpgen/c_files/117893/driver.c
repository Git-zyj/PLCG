#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1651432880;
unsigned int var_2 = 1534096019U;
short var_5 = (short)30296;
signed char var_6 = (signed char)-105;
_Bool var_7 = (_Bool)0;
signed char var_13 = (signed char)109;
int zero = 0;
int var_18 = 913612628;
int var_19 = 1144971620;
short var_20 = (short)-12583;
unsigned short var_21 = (unsigned short)49326;
unsigned char var_22 = (unsigned char)186;
unsigned char var_23 = (unsigned char)35;
unsigned int var_24 = 1123222478U;
int arr_5 [16] ;
int arr_11 [16] [16] [16] [16] ;
unsigned long long int arr_14 [16] [16] [16] [16] ;
unsigned short arr_16 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -340413203 : 707989863;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 1499537873;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 3805981138577678995ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned short)24756 : (unsigned short)49413;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
