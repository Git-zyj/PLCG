#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2767768797U;
unsigned int var_1 = 2379356819U;
short var_2 = (short)29575;
signed char var_3 = (signed char)-116;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 2391756392U;
unsigned long long int var_9 = 4766072954617521391ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_12 = 5766635378075722990LL;
signed char var_13 = (signed char)55;
unsigned long long int var_14 = 2300894903309904082ULL;
int var_15 = 742019901;
unsigned int var_16 = 4074337927U;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3715842587U;
unsigned int arr_0 [12] ;
long long int arr_1 [12] ;
short arr_2 [12] [12] ;
unsigned int arr_3 [12] ;
unsigned long long int arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2065649938U : 4191362139U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 5906281104945865168LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)2490 : (short)-23122;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1017952495U : 3553003844U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 16745002953674561856ULL : 7613625077685351948ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
