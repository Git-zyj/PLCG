#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)75;
int var_1 = -1190378461;
short var_2 = (short)7210;
long long int var_4 = -9118239334989851049LL;
unsigned short var_5 = (unsigned short)35067;
_Bool var_6 = (_Bool)0;
short var_8 = (short)7351;
int zero = 0;
signed char var_10 = (signed char)16;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-29444;
unsigned char var_13 = (unsigned char)185;
unsigned short var_14 = (unsigned short)412;
short var_15 = (short)25832;
short arr_0 [21] ;
short arr_1 [21] ;
int arr_2 [21] ;
int arr_4 [21] ;
long long int arr_5 [21] [21] ;
long long int arr_3 [21] ;
short arr_6 [21] [21] ;
unsigned short arr_7 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-17927 : (short)-2860;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)9553;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 484831660 : -1375454401;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 976169400;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = -4585590611615639097LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -9107687755836773382LL : 3107199416053995645LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)12242 : (short)-26491;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)22670 : (unsigned short)10919;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
