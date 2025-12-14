#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10574462002984876572ULL;
unsigned int var_4 = 2954344590U;
unsigned char var_5 = (unsigned char)119;
unsigned long long int var_6 = 18092659234036045571ULL;
signed char var_7 = (signed char)116;
unsigned long long int var_8 = 16754083683483606276ULL;
signed char var_9 = (signed char)-16;
signed char var_11 = (signed char)31;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 10748500024894387305ULL;
unsigned short var_14 = (unsigned short)936;
unsigned short var_15 = (unsigned short)19115;
int var_16 = -1920787133;
signed char var_17 = (signed char)75;
int var_18 = 2002823112;
unsigned char var_19 = (unsigned char)247;
short arr_1 [22] ;
unsigned int arr_2 [14] ;
long long int arr_4 [14] [14] ;
_Bool arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-19718;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 2874898419U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = -5032915983670203624LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
