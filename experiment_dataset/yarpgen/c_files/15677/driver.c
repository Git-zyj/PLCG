#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)4322;
unsigned int var_6 = 1998838095U;
unsigned short var_8 = (unsigned short)62781;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_12 = (short)-28941;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 6638193415702160588ULL;
int var_15 = -172578744;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)19;
unsigned long long int var_18 = 14999967651162532271ULL;
unsigned int arr_1 [16] ;
unsigned int arr_2 [25] ;
unsigned int arr_5 [25] [25] ;
int arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 752925003U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 2158797071U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 980221614U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 1067742386;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
