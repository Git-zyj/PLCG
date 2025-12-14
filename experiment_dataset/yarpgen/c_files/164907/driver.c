#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2437357139U;
unsigned int var_4 = 63041113U;
unsigned int var_5 = 326333480U;
short var_6 = (short)20348;
signed char var_7 = (signed char)62;
_Bool var_10 = (_Bool)0;
int var_11 = -482475545;
_Bool var_12 = (_Bool)1;
unsigned int var_14 = 2366675411U;
int zero = 0;
short var_20 = (short)9385;
short var_21 = (short)32681;
unsigned int var_22 = 3615975735U;
long long int var_23 = -4127003165641859727LL;
signed char var_24 = (signed char)14;
short arr_0 [19] ;
unsigned int arr_4 [19] [19] [19] ;
short arr_2 [19] ;
long long int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)-21818;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3081061024U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)14943;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 1605061680412352529LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
