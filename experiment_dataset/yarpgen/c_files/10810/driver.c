#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_3 = (_Bool)0;
int var_7 = -504108586;
unsigned char var_8 = (unsigned char)247;
unsigned long long int var_9 = 9441702200275866336ULL;
_Bool var_11 = (_Bool)0;
int var_13 = -1943983386;
short var_14 = (short)13415;
unsigned char var_16 = (unsigned char)248;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3629101766U;
long long int var_21 = -7414313981536683016LL;
unsigned char var_22 = (unsigned char)168;
unsigned short arr_0 [10] ;
unsigned char arr_2 [10] ;
unsigned char arr_3 [10] [10] ;
_Bool arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)5130;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
