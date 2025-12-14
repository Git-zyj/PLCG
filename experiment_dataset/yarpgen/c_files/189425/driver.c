#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 4166663230U;
short var_2 = (short)23308;
signed char var_3 = (signed char)-30;
long long int var_4 = 2326441104121412008LL;
short var_5 = (short)-31623;
long long int var_6 = -1800710638703556186LL;
short var_7 = (short)24032;
long long int var_8 = 756537754342604521LL;
short var_9 = (short)20395;
long long int var_10 = 2186254076264511565LL;
int zero = 0;
short var_11 = (short)-28049;
int var_12 = -436452687;
unsigned short var_13 = (unsigned short)44113;
unsigned int var_14 = 2323202848U;
short var_15 = (short)-30812;
unsigned char var_16 = (unsigned char)66;
unsigned short arr_0 [24] [24] ;
signed char arr_1 [24] ;
int arr_2 [24] ;
unsigned short arr_3 [24] [24] [24] ;
unsigned int arr_7 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)51649;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 1920254919;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)42455;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 2415884958U : 3168509844U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
