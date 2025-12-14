#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8198;
unsigned int var_2 = 2424454626U;
int var_3 = -1337766860;
unsigned long long int var_4 = 8110551507622556659ULL;
unsigned long long int var_7 = 102884550285154948ULL;
signed char var_8 = (signed char)-18;
unsigned long long int var_11 = 6485599511679073710ULL;
unsigned long long int var_14 = 11969895512885693122ULL;
int zero = 0;
short var_16 = (short)19237;
unsigned int var_17 = 3898142074U;
int var_18 = 1762945429;
unsigned int var_19 = 1080503836U;
short var_20 = (short)16275;
_Bool var_21 = (_Bool)1;
int arr_0 [13] ;
unsigned int arr_1 [13] [13] ;
unsigned long long int arr_2 [13] [13] ;
unsigned long long int arr_4 [13] [13] ;
unsigned long long int arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -1266639007;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 388619951U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 2617010904546986833ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 3774618535558695636ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 199766284253129476ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
