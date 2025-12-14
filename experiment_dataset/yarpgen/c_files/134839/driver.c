#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)109;
int var_3 = 1926403946;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 1357218586U;
long long int var_15 = 5598813893548317832LL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)5136;
unsigned short var_18 = (unsigned short)32933;
unsigned int var_19 = 3958818631U;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 10881156010993303072ULL;
_Bool arr_1 [10] ;
unsigned char arr_5 [10] [10] ;
long long int arr_6 [10] ;
unsigned long long int arr_10 [10] [10] [10] ;
long long int arr_11 [10] ;
_Bool arr_12 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -8753079766010865975LL : -723459287174799535LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 14168720401135738774ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = 6096085962244761864LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
