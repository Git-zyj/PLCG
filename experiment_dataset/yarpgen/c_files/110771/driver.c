#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 844973164;
long long int var_1 = 331548437591813349LL;
int var_3 = 1476604881;
unsigned char var_4 = (unsigned char)29;
_Bool var_5 = (_Bool)1;
short var_7 = (short)19613;
long long int var_8 = -4727574204290079797LL;
long long int var_9 = -1934880070229924511LL;
int var_10 = -1531944177;
unsigned short var_11 = (unsigned short)13076;
unsigned char var_12 = (unsigned char)241;
unsigned int var_13 = 3633234150U;
short var_14 = (short)24312;
long long int var_15 = -3118646733294908718LL;
int zero = 0;
unsigned short var_16 = (unsigned short)56800;
_Bool var_17 = (_Bool)1;
int var_18 = -1215098901;
unsigned char var_19 = (unsigned char)135;
long long int var_20 = -4623552787061232971LL;
unsigned short arr_0 [23] ;
unsigned int arr_2 [23] [23] ;
_Bool arr_3 [23] ;
int arr_4 [23] ;
short arr_5 [23] [23] ;
short arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)3002;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 2343027424U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 1785274203;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-15;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (short)25420;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
