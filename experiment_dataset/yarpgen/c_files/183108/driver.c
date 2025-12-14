#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -102068374;
long long int var_1 = 874096383221690957LL;
unsigned char var_2 = (unsigned char)77;
short var_6 = (short)-31029;
int var_7 = -1727420274;
unsigned char var_9 = (unsigned char)3;
int zero = 0;
signed char var_10 = (signed char)-108;
short var_11 = (short)7792;
unsigned char var_12 = (unsigned char)25;
int var_13 = -114510674;
int var_14 = 1898736535;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 8664209900187504194ULL;
short arr_0 [25] ;
short arr_1 [25] ;
short arr_3 [12] ;
short arr_7 [19] ;
unsigned long long int arr_8 [19] ;
unsigned long long int arr_5 [12] ;
short arr_9 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)23835;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-13002 : (short)31928;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)8836;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (short)-24057;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 7000045791171040964ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 17555489940535387764ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (short)6554;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
