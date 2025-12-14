#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_9 = 13654159020864510870ULL;
unsigned long long int var_10 = 16135423380855898840ULL;
unsigned long long int var_14 = 4858277186480223457ULL;
long long int var_15 = -1712050999189968059LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 7940147298426480202ULL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 11705306482424579547ULL;
unsigned long long int var_21 = 12717546422258133202ULL;
unsigned long long int var_22 = 2589867877213384228ULL;
unsigned short var_23 = (unsigned short)30884;
int arr_0 [21] [21] ;
unsigned long long int arr_2 [21] [21] ;
int arr_8 [21] [21] [21] [21] ;
unsigned long long int arr_11 [25] ;
long long int arr_12 [25] [25] ;
unsigned long long int arr_10 [21] [21] [21] [21] ;
int arr_13 [25] ;
unsigned short arr_14 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = -1429427614;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 6606250379051483623ULL : 6752536841024669964ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 634512421;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 3945871531014153169ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = -7637810844713115927LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 164530723734082823ULL : 10268004868836591142ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = 321275602;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (unsigned short)6673;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
