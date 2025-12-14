#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)59;
unsigned int var_4 = 1538142242U;
long long int var_6 = -8142125203505634762LL;
unsigned int var_8 = 2363204137U;
long long int var_9 = 9013936648267056912LL;
long long int var_10 = -4858833446931308328LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1333063447U;
signed char var_17 = (signed char)23;
unsigned int var_18 = 3685112597U;
_Bool var_19 = (_Bool)0;
long long int var_20 = -4942919966282112341LL;
unsigned int var_21 = 388173168U;
unsigned int var_22 = 2884135452U;
unsigned long long int var_23 = 20256950664747218ULL;
unsigned long long int var_24 = 10905327576262062912ULL;
signed char var_25 = (signed char)-123;
unsigned int arr_2 [16] ;
long long int arr_5 [16] ;
unsigned long long int arr_7 [16] ;
unsigned int arr_9 [16] [16] [16] [16] ;
long long int arr_10 [16] ;
unsigned int arr_18 [16] [16] ;
long long int arr_16 [16] [16] [16] [16] ;
unsigned int arr_19 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 1629048935U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -559665473629485666LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2937139628938620460ULL : 12656373735812457824ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 2076372687U : 3325186867U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -7517562722807033686LL : -1143393664369671710LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_18 [i_0] [i_1] = 1146387189U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = -51909678231789305LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = 257558693U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
