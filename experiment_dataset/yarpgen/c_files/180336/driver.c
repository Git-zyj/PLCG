#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3088651126640934520ULL;
long long int var_2 = 7092994989493069672LL;
long long int var_3 = 2200527133199018637LL;
short var_7 = (short)-29261;
unsigned short var_8 = (unsigned short)45156;
unsigned int var_9 = 4110182168U;
unsigned int var_11 = 2575664830U;
int var_14 = 1437676424;
unsigned int var_16 = 108905619U;
unsigned long long int var_17 = 11283890586092967622ULL;
signed char var_18 = (signed char)49;
unsigned long long int var_19 = 17796823782337368055ULL;
int zero = 0;
long long int var_20 = -6007999762230054007LL;
unsigned int var_21 = 2251557560U;
int var_22 = 2032105701;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)19;
signed char var_25 = (signed char)102;
unsigned int var_26 = 3602924598U;
_Bool arr_0 [21] ;
signed char arr_1 [21] ;
unsigned long long int arr_4 [22] ;
unsigned long long int arr_6 [22] ;
_Bool arr_2 [21] [21] ;
unsigned long long int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)64;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 12529229367095131099ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 4252526936505047717ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 15984562900322578787ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
