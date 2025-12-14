#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)185;
long long int var_6 = 6620989210933541962LL;
_Bool var_8 = (_Bool)0;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)105;
unsigned long long int var_21 = 3867773985111340264ULL;
unsigned short var_22 = (unsigned short)37101;
int var_23 = 1581236677;
unsigned long long int var_24 = 9266357123328861368ULL;
unsigned short arr_0 [13] ;
short arr_1 [13] ;
short arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)33755;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)4558;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)-12736;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
