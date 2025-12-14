#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)119;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)22;
unsigned char var_5 = (unsigned char)103;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 3068054189428481211ULL;
unsigned char var_8 = (unsigned char)213;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 1497135503U;
int var_12 = 1884379421;
signed char var_13 = (signed char)77;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)220;
signed char arr_3 [21] [21] [21] ;
long long int arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -2058324655937381868LL : 2219698799452288304LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
