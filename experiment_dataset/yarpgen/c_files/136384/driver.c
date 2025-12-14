#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 896718601550725020ULL;
int var_1 = 487584324;
_Bool var_2 = (_Bool)0;
long long int var_3 = 5199765189349510260LL;
int var_6 = -307327270;
unsigned int var_7 = 1454588898U;
signed char var_9 = (signed char)-41;
unsigned long long int var_10 = 9049861895742816061ULL;
int var_11 = 1430157188;
long long int var_12 = 3967418774458197313LL;
signed char var_13 = (signed char)-11;
unsigned short var_15 = (unsigned short)64528;
_Bool var_16 = (_Bool)1;
long long int var_18 = 8807626895209888402LL;
int zero = 0;
long long int var_19 = -2704745899540672014LL;
unsigned char var_20 = (unsigned char)220;
short var_21 = (short)25468;
_Bool var_22 = (_Bool)1;
short var_23 = (short)25275;
unsigned char var_24 = (unsigned char)250;
signed char var_25 = (signed char)0;
_Bool var_26 = (_Bool)1;
unsigned int arr_0 [24] ;
unsigned char arr_1 [24] ;
signed char arr_2 [24] [24] ;
signed char arr_3 [21] ;
unsigned short arr_14 [16] [16] ;
_Bool arr_5 [21] ;
unsigned short arr_8 [24] [24] ;
signed char arr_12 [16] [16] ;
unsigned long long int arr_16 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 4024184222U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)63454;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)29718 : (unsigned short)44927;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = 14410543823909379770ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
