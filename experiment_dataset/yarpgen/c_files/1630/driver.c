#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18351;
_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)161;
unsigned long long int var_4 = 12691311086483869302ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)53557;
unsigned long long int var_9 = 17137962217884231760ULL;
int zero = 0;
int var_10 = -486111819;
signed char var_11 = (signed char)-111;
unsigned char var_12 = (unsigned char)78;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 1051425680212281633ULL;
unsigned long long int arr_0 [15] [15] ;
int arr_1 [15] ;
unsigned short arr_2 [15] ;
_Bool arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 4285594434995985185ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1623622971;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)24133;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
