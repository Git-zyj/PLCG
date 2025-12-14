#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)135;
_Bool var_8 = (_Bool)0;
int var_12 = -1958036898;
signed char var_15 = (signed char)-70;
int zero = 0;
unsigned short var_17 = (unsigned short)34331;
short var_18 = (short)31825;
signed char var_19 = (signed char)85;
_Bool var_20 = (_Bool)0;
int var_21 = 1672187523;
long long int var_22 = 6871372221285864496LL;
_Bool var_23 = (_Bool)0;
int arr_2 [25] [25] ;
_Bool arr_3 [25] ;
unsigned int arr_5 [25] ;
unsigned short arr_7 [25] ;
int arr_12 [14] ;
unsigned char arr_10 [13] ;
unsigned char arr_11 [13] [13] ;
signed char arr_18 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = -237849583;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 3987926886U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (unsigned short)25592;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = -275462332;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = (signed char)110;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
