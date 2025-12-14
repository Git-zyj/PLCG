#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12680;
unsigned long long int var_2 = 3743696252108822398ULL;
unsigned long long int var_3 = 4664926527552229153ULL;
short var_10 = (short)-5373;
int var_11 = -300961198;
signed char var_12 = (signed char)23;
unsigned short var_15 = (unsigned short)28714;
unsigned int var_17 = 1957051611U;
int zero = 0;
unsigned char var_19 = (unsigned char)27;
int var_20 = 1959818403;
_Bool var_21 = (_Bool)1;
unsigned short arr_0 [23] ;
int arr_1 [23] [23] ;
int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20498 : (unsigned short)30662;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 213620224 : -1325685484;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1915610706 : 2075482390;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
