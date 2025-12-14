#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26660;
long long int var_2 = -3634145829647732344LL;
_Bool var_3 = (_Bool)0;
long long int var_5 = 7068180886510121149LL;
unsigned long long int var_8 = 5418410400495301865ULL;
unsigned long long int var_10 = 15479778748304528237ULL;
unsigned long long int var_12 = 15600761701470663111ULL;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-21813;
int zero = 0;
unsigned short var_19 = (unsigned short)7913;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 2492070119439192078ULL;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)0;
int var_25 = -2143690148;
unsigned char arr_0 [20] ;
unsigned short arr_1 [20] ;
_Bool arr_4 [20] [20] ;
unsigned short arr_5 [20] ;
unsigned long long int arr_2 [20] ;
_Bool arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)75 : (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)16903;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned short)55104;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2969664612594826159ULL : 16884383657175296342ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
