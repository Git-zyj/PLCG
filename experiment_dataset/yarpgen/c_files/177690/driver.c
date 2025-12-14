#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)249;
unsigned char var_2 = (unsigned char)181;
_Bool var_8 = (_Bool)0;
unsigned char var_12 = (unsigned char)92;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)195;
int zero = 0;
unsigned char var_20 = (unsigned char)97;
unsigned char var_21 = (unsigned char)251;
unsigned char var_22 = (unsigned char)41;
unsigned char var_23 = (unsigned char)8;
unsigned char var_24 = (unsigned char)141;
_Bool var_25 = (_Bool)1;
unsigned char arr_0 [18] ;
_Bool arr_1 [18] ;
_Bool arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
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
