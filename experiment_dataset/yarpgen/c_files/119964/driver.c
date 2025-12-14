#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)17;
unsigned int var_4 = 611981805U;
unsigned short var_8 = (unsigned short)729;
unsigned short var_9 = (unsigned short)33503;
long long int var_12 = 7583222632150706915LL;
int zero = 0;
long long int var_13 = 6266092587311002701LL;
signed char var_14 = (signed char)104;
int var_15 = 1601894277;
unsigned short var_16 = (unsigned short)54627;
unsigned int var_17 = 2950286370U;
long long int var_18 = 7630100552960102899LL;
unsigned short var_19 = (unsigned short)13377;
unsigned short arr_1 [16] ;
int arr_3 [25] ;
int arr_4 [25] ;
int arr_7 [13] ;
long long int arr_15 [19] [19] ;
int arr_21 [19] [19] [19] [19] [19] ;
int arr_5 [25] ;
long long int arr_9 [13] [13] ;
unsigned short arr_10 [13] ;
signed char arr_19 [19] ;
long long int arr_25 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)44878;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -1448866025;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = -1648159419;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = -1404440539;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = 1343469126553316755LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = -1701170427;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 1874339036;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 8188975420540963792LL : -3878794165208633164LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)52649 : (unsigned short)42479;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_25 [i_0] = 4063054679797799863LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
