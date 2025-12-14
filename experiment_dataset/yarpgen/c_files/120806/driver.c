#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2209725818087642570LL;
unsigned int var_1 = 2970193211U;
unsigned long long int var_2 = 2461359398389058369ULL;
long long int var_3 = -3239843274477781265LL;
unsigned long long int var_7 = 7237818470132105827ULL;
_Bool var_8 = (_Bool)1;
short var_9 = (short)22778;
unsigned int var_10 = 3879490869U;
int zero = 0;
unsigned int var_14 = 2800444133U;
short var_15 = (short)-21308;
short var_16 = (short)-13748;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-4719;
long long int arr_1 [21] ;
unsigned int arr_8 [21] [21] [21] ;
_Bool arr_10 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -7494584867984741433LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 2072898039U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
