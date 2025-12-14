#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_4 = (_Bool)0;
long long int var_5 = -7722245838452893915LL;
long long int var_6 = -9171767187122100523LL;
long long int var_7 = -5917634482238328889LL;
int zero = 0;
unsigned long long int var_10 = 4555263353184066336ULL;
unsigned int var_11 = 1496857446U;
signed char var_12 = (signed char)-20;
unsigned long long int var_13 = 11584136979962586758ULL;
long long int var_14 = -4969490394405325941LL;
int var_15 = 1142255538;
long long int arr_0 [16] ;
short arr_1 [16] ;
unsigned long long int arr_2 [16] ;
unsigned long long int arr_4 [16] ;
unsigned short arr_8 [16] [16] [16] ;
long long int arr_11 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 5846806776090041759LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)23286;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 8672547430412163908ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 5175583797208419106ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)44825;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = 5636056594128310693LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
