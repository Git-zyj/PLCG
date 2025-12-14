#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18332;
unsigned long long int var_4 = 4273590291188681875ULL;
signed char var_5 = (signed char)33;
signed char var_6 = (signed char)87;
int var_7 = -783479738;
long long int var_8 = -6330786085021777080LL;
unsigned short var_9 = (unsigned short)29734;
short var_10 = (short)30265;
unsigned int var_12 = 2789992737U;
unsigned int var_13 = 3652109215U;
unsigned short var_14 = (unsigned short)15571;
int zero = 0;
unsigned int var_15 = 114910708U;
unsigned short var_16 = (unsigned short)22480;
long long int var_17 = -6725486087294151156LL;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 8618816055723602606ULL;
int arr_0 [18] [18] ;
unsigned long long int arr_1 [18] [18] ;
unsigned short arr_5 [21] [21] ;
int arr_2 [18] ;
_Bool arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 215787245;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 436935962957099369ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)27877;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 59083628;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
