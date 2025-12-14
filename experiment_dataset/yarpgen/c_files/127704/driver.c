#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9886145446369695638ULL;
short var_2 = (short)1059;
unsigned short var_7 = (unsigned short)58994;
unsigned char var_10 = (unsigned char)230;
unsigned long long int var_14 = 15095095163748643965ULL;
short var_16 = (short)-14092;
unsigned char var_17 = (unsigned char)96;
int var_18 = 1991166152;
int var_19 = -599900289;
int zero = 0;
unsigned char var_20 = (unsigned char)125;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 7331925960408559852ULL;
unsigned char var_23 = (unsigned char)20;
_Bool var_24 = (_Bool)1;
int arr_1 [19] [19] ;
unsigned char arr_2 [19] ;
unsigned char arr_3 [19] [19] ;
unsigned char arr_4 [19] ;
unsigned long long int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 808524761;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 13049792870272710926ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
