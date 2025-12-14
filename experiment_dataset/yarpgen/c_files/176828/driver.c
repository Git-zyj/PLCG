#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
long long int var_3 = 7031122630180943107LL;
int var_5 = 210177620;
int var_6 = -1938704125;
int var_7 = -2112793490;
int var_8 = 1116482179;
signed char var_9 = (signed char)-97;
unsigned long long int var_10 = 8284446920737404484ULL;
signed char var_11 = (signed char)35;
unsigned int var_12 = 838682760U;
int zero = 0;
int var_14 = -84747873;
unsigned int var_15 = 988371066U;
int var_16 = -2086755722;
unsigned int var_17 = 1009822553U;
signed char arr_1 [23] [23] ;
unsigned long long int arr_2 [23] [23] ;
int arr_3 [23] ;
long long int arr_7 [23] ;
long long int arr_8 [23] [23] [23] [23] ;
int arr_9 [23] [23] [23] ;
unsigned int arr_10 [23] [23] [23] ;
long long int arr_11 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-32 : (signed char)-89;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 8390013030224561186ULL : 5930569974006164411ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1983245011;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = -7403944870877172691LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -882446160751658330LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -30402725 : 1314822091;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4209436880U : 3314639508U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -6789224249858797201LL : 5503587728966636122LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
