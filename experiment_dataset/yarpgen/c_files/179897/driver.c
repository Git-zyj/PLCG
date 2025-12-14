#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6006;
unsigned char var_1 = (unsigned char)75;
unsigned int var_2 = 3348340283U;
unsigned int var_3 = 458780918U;
int var_4 = 1424227040;
short var_5 = (short)5697;
unsigned int var_6 = 3672722531U;
long long int var_7 = -5578636404459932612LL;
short var_8 = (short)14718;
unsigned short var_9 = (unsigned short)8488;
int zero = 0;
unsigned int var_10 = 3327098704U;
int var_11 = -260876505;
signed char var_12 = (signed char)-72;
unsigned int var_13 = 919629963U;
short var_14 = (short)8893;
unsigned long long int var_15 = 2663538329574780514ULL;
unsigned long long int var_16 = 9372733707124687512ULL;
int var_17 = 1224427314;
unsigned int arr_0 [21] ;
long long int arr_1 [21] ;
signed char arr_2 [11] [11] ;
short arr_3 [11] [11] ;
unsigned int arr_4 [11] [11] ;
signed char arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3520231946U : 1719358110U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 1659105801703991625LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-85 : (signed char)-5;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)6264 : (short)176;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 1428772822U : 3630379814U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-91 : (signed char)-121;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
