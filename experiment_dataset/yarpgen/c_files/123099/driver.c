#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12909390280236632800ULL;
_Bool var_1 = (_Bool)1;
long long int var_2 = 1035924070978048205LL;
long long int var_3 = -8989567944495164793LL;
unsigned int var_4 = 3783562069U;
unsigned long long int var_6 = 17006298627564225904ULL;
signed char var_7 = (signed char)-28;
signed char var_10 = (signed char)126;
unsigned int var_11 = 2735596075U;
unsigned char var_12 = (unsigned char)190;
int zero = 0;
unsigned short var_16 = (unsigned short)12290;
long long int var_17 = -6546069699241601741LL;
unsigned char var_18 = (unsigned char)187;
unsigned long long int var_19 = 14203708457339158582ULL;
int var_20 = 1964347862;
unsigned long long int var_21 = 18197390563900230791ULL;
long long int var_22 = -6726101935591223615LL;
unsigned int var_23 = 3164942120U;
unsigned int arr_0 [13] ;
unsigned long long int arr_1 [13] ;
unsigned char arr_2 [13] [13] ;
unsigned char arr_4 [10] ;
int arr_10 [18] ;
long long int arr_3 [13] ;
_Bool arr_11 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 2891171005U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 2686453752251557661ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = 1405482132;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -5883206684176942431LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
