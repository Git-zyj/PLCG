#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)77;
_Bool var_3 = (_Bool)1;
long long int var_6 = -7699757675354280889LL;
_Bool var_12 = (_Bool)1;
unsigned int var_15 = 3388055297U;
signed char var_16 = (signed char)121;
int zero = 0;
long long int var_17 = -1883691202284261556LL;
long long int var_18 = 878240181683618666LL;
unsigned int var_19 = 1068442710U;
long long int var_20 = -5032942622666038113LL;
int var_21 = 1272943993;
_Bool var_22 = (_Bool)1;
long long int var_23 = -7987017360577015041LL;
long long int arr_0 [16] ;
long long int arr_1 [16] [16] ;
signed char arr_3 [16] [16] ;
short arr_4 [16] ;
long long int arr_9 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 5539634682866122067LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = -6207702035485945904LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)29027;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 8642192301396775617LL : -4434592402136038105LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
