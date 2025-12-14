#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13595231669658307476ULL;
unsigned int var_3 = 1396811230U;
unsigned short var_8 = (unsigned short)29438;
unsigned long long int var_9 = 16477827027405552090ULL;
int var_10 = 2004562792;
long long int var_13 = -8412734646845772511LL;
short var_14 = (short)-16797;
int zero = 0;
long long int var_15 = 3712436017436928795LL;
long long int var_16 = 8877967301749340773LL;
short var_17 = (short)2219;
unsigned long long int var_18 = 6164474584394197335ULL;
long long int var_19 = 883087576375151380LL;
unsigned short var_20 = (unsigned short)32505;
unsigned int var_21 = 304733549U;
signed char arr_1 [15] ;
short arr_3 [19] [19] ;
unsigned char arr_5 [19] [19] ;
unsigned long long int arr_6 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-25951;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 5114455094202112848ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
