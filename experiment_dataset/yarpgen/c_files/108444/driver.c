#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2320680360633845075LL;
unsigned long long int var_4 = 6393440659252630646ULL;
signed char var_7 = (signed char)75;
unsigned long long int var_9 = 14838629732447361630ULL;
unsigned long long int var_11 = 1618854936931547022ULL;
unsigned long long int var_12 = 1547565299537775760ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_16 = -7586218082911729343LL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 4135130748629860090ULL;
unsigned long long int var_19 = 3239483763415509037ULL;
unsigned char var_20 = (unsigned char)0;
long long int arr_0 [24] ;
unsigned long long int arr_1 [24] ;
unsigned char arr_2 [24] [24] [24] ;
_Bool arr_4 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -3005983061136049836LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 14566980102279234267ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
