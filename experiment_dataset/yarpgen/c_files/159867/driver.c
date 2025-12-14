#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 866088502U;
unsigned int var_1 = 1432684091U;
signed char var_4 = (signed char)-59;
unsigned int var_6 = 1036748174U;
long long int var_11 = 8089445751007814583LL;
signed char var_12 = (signed char)4;
int var_14 = 419260018;
unsigned int var_15 = 1504856263U;
int var_17 = 32846960;
int zero = 0;
signed char var_20 = (signed char)-59;
_Bool var_21 = (_Bool)0;
int var_22 = 251169032;
long long int var_23 = -8705770988250708850LL;
int var_24 = 583824676;
long long int arr_1 [25] [25] ;
signed char arr_3 [25] ;
int arr_4 [25] ;
unsigned int arr_6 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 1769894362160583043LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 1734764396;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2993160345U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
