#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 5846813204829494455ULL;
int var_2 = 46168672;
unsigned long long int var_3 = 13439852978854191922ULL;
unsigned int var_4 = 2538313101U;
unsigned int var_7 = 502683190U;
unsigned int var_8 = 3337861922U;
short var_9 = (short)16299;
unsigned long long int var_13 = 2051148082795554236ULL;
unsigned int var_14 = 665288957U;
int zero = 0;
long long int var_15 = -3722911571739064099LL;
_Bool var_16 = (_Bool)0;
int var_17 = 2084121571;
int var_18 = -48650094;
short var_19 = (short)20338;
unsigned long long int var_20 = 8325490905151664255ULL;
short var_21 = (short)-24882;
long long int var_22 = 7513840579358410069LL;
unsigned long long int arr_1 [15] ;
_Bool arr_5 [15] [15] ;
_Bool arr_14 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 9923625610070307835ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
