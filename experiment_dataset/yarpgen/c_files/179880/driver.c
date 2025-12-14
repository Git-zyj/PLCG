#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-77;
int var_2 = -272327637;
unsigned int var_3 = 36135183U;
signed char var_4 = (signed char)89;
short var_6 = (short)28288;
unsigned char var_7 = (unsigned char)97;
int var_8 = -6435280;
unsigned char var_10 = (unsigned char)174;
unsigned char var_12 = (unsigned char)29;
unsigned int var_14 = 2321307542U;
unsigned int var_15 = 1558965155U;
int zero = 0;
long long int var_16 = 4258177178466565723LL;
short var_17 = (short)26633;
long long int var_18 = -4285144268498784293LL;
unsigned int var_19 = 2001989055U;
long long int var_20 = 4517191370077400256LL;
short var_21 = (short)25162;
unsigned long long int var_22 = 529049305779685971ULL;
short arr_0 [14] ;
long long int arr_1 [14] ;
_Bool arr_5 [19] ;
long long int arr_7 [19] ;
long long int arr_9 [19] ;
long long int arr_4 [14] [14] ;
unsigned int arr_8 [19] ;
short arr_11 [19] ;
_Bool arr_12 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)-6124;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 2761647670284762351LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 7537183076830729860LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 5273341017383712668LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = -5054616463089327184LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 1813639476U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (short)21986;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
