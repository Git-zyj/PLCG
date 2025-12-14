#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2969968337U;
unsigned int var_1 = 2728474420U;
unsigned int var_6 = 3272314876U;
unsigned short var_7 = (unsigned short)18214;
unsigned int var_8 = 2504208963U;
unsigned short var_9 = (unsigned short)42186;
unsigned int var_10 = 3640321972U;
unsigned char var_13 = (unsigned char)248;
unsigned int var_16 = 3961980775U;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 2678891299U;
signed char var_19 = (signed char)43;
unsigned long long int var_20 = 11760606682472152779ULL;
short var_21 = (short)325;
unsigned long long int arr_1 [21] ;
unsigned long long int arr_2 [21] [21] ;
unsigned long long int arr_3 [21] [21] [21] ;
unsigned int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 8405887356109486060ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 9331652516330358723ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 12950546598488456566ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3878600665U : 2676480362U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
