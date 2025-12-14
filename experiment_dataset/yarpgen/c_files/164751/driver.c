#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2815147878U;
_Bool var_2 = (_Bool)0;
long long int var_3 = 1140186161850820776LL;
unsigned short var_4 = (unsigned short)31490;
unsigned long long int var_12 = 18034212511876538895ULL;
unsigned short var_13 = (unsigned short)20137;
unsigned short var_14 = (unsigned short)19980;
unsigned long long int var_15 = 13810182225868507354ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2352917299U;
unsigned long long int var_18 = 16149091735417323670ULL;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
unsigned long long int arr_0 [11] ;
unsigned int arr_2 [11] [11] ;
_Bool arr_3 [11] [11] ;
_Bool arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 12542204101802148661ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 2676209715U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
