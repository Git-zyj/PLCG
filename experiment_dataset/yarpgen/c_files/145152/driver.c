#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1469241814;
short var_1 = (short)-17920;
signed char var_2 = (signed char)-56;
short var_3 = (short)-32536;
unsigned long long int var_5 = 7272266517797052828ULL;
int var_6 = -1657572386;
int var_7 = 1405811683;
unsigned int var_8 = 2843677894U;
short var_9 = (short)20923;
short var_10 = (short)30938;
short var_11 = (short)-11742;
signed char var_12 = (signed char)102;
unsigned short var_13 = (unsigned short)55317;
int zero = 0;
unsigned long long int var_16 = 8360673266092730758ULL;
unsigned short var_17 = (unsigned short)61434;
signed char var_18 = (signed char)-3;
int var_19 = 1505095043;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2546630229U;
int arr_0 [21] ;
unsigned short arr_1 [21] ;
unsigned short arr_2 [21] ;
short arr_7 [15] ;
int arr_3 [21] ;
unsigned char arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -132411200;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)25758;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)54162;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (short)-516;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 1572506789;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)76 : (unsigned char)34;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
