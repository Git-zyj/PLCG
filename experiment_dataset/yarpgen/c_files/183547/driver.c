#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1157390666;
unsigned short var_2 = (unsigned short)839;
long long int var_4 = 6845529245070773239LL;
int var_9 = 1126685877;
short var_12 = (short)22424;
signed char var_17 = (signed char)85;
int zero = 0;
unsigned int var_20 = 197193185U;
long long int var_21 = -8430758845469439808LL;
signed char var_22 = (signed char)-99;
unsigned int var_23 = 1080388035U;
short var_24 = (short)21888;
unsigned int var_25 = 3048855459U;
_Bool var_26 = (_Bool)1;
long long int var_27 = 1627585038084965389LL;
int arr_1 [24] ;
short arr_2 [24] ;
unsigned short arr_4 [24] [24] ;
signed char arr_8 [24] ;
int arr_9 [24] [24] ;
signed char arr_7 [24] ;
unsigned int arr_18 [24] [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1385684154;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)2061;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)24809;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? -859682338 : 721239215;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 2851206518U : 3931810846U;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
