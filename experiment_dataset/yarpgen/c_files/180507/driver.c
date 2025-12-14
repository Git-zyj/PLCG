#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3535772241U;
signed char var_5 = (signed char)16;
unsigned long long int var_6 = 8354654460477429639ULL;
unsigned long long int var_7 = 6657915171457112333ULL;
short var_10 = (short)6645;
unsigned long long int var_12 = 4011903001990851893ULL;
unsigned char var_15 = (unsigned char)213;
unsigned short var_16 = (unsigned short)30248;
int zero = 0;
unsigned char var_17 = (unsigned char)56;
unsigned long long int var_18 = 15162204952289487412ULL;
unsigned int var_19 = 2260990358U;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)31;
unsigned long long int var_22 = 7769241928161186218ULL;
_Bool arr_0 [25] [25] ;
unsigned long long int arr_1 [25] ;
unsigned int arr_2 [25] ;
unsigned int arr_4 [25] [25] ;
unsigned long long int arr_6 [25] [25] ;
signed char arr_9 [25] [25] [25] ;
int arr_15 [10] ;
unsigned int arr_12 [25] ;
short arr_13 [25] [25] [25] ;
long long int arr_17 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 11668947970114536760ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 1850666008U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 3472826152U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 12494091879501596741ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = -55617743;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 2726241595U : 17072941U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)13567 : (short)-32429;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_17 [i_0] [i_1] = -8519578603136747901LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
