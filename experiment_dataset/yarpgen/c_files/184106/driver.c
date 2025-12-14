#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1160942134790896103LL;
long long int var_2 = -1481111688305602069LL;
unsigned int var_3 = 1836678237U;
long long int var_6 = -321579208811426231LL;
long long int var_10 = -503209218095889962LL;
long long int var_14 = -3816218475639645355LL;
unsigned int var_15 = 3581053699U;
long long int var_17 = -3998183268708151633LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 6695117495119973300LL;
long long int var_20 = -2192504097145859153LL;
unsigned int var_21 = 631172732U;
long long int var_22 = -3669787472540015214LL;
long long int var_23 = 6421720696707946704LL;
_Bool var_24 = (_Bool)0;
unsigned int var_25 = 2033093633U;
long long int var_26 = 1524624297490121060LL;
unsigned int arr_0 [13] [13] ;
unsigned int arr_1 [13] [13] ;
unsigned int arr_2 [13] ;
long long int arr_3 [13] [13] ;
_Bool arr_5 [13] ;
long long int arr_8 [13] [13] [13] ;
unsigned int arr_9 [13] [13] [13] ;
unsigned int arr_14 [13] [13] [13] [13] ;
long long int arr_15 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 3199007621U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 598774533U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 2795966442U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 1097171303419695017LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -1553186859991804088LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1905703849U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 1842052246U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = 2156333952845045314LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
