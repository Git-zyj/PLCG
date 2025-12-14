#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4165083516U;
unsigned long long int var_5 = 5660035147442793018ULL;
short var_7 = (short)-12381;
signed char var_8 = (signed char)-7;
signed char var_9 = (signed char)-21;
signed char var_10 = (signed char)-70;
signed char var_11 = (signed char)-12;
unsigned long long int var_12 = 14402300520884876340ULL;
int zero = 0;
int var_13 = 2041948099;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-1;
unsigned long long int arr_0 [18] ;
unsigned int arr_2 [18] ;
unsigned int arr_3 [18] [18] ;
unsigned int arr_4 [18] ;
_Bool arr_6 [18] ;
short arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 3758169219927705710ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 2840589326U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 3687485418U : 3469632366U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 35370929U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-28195 : (short)-14954;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
