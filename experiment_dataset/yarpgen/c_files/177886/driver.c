#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1676955033;
short var_2 = (short)16232;
int var_3 = -46768674;
short var_4 = (short)-12319;
unsigned char var_6 = (unsigned char)227;
long long int var_7 = 6991419510543461661LL;
int var_9 = -2091974758;
unsigned int var_10 = 2662962928U;
short var_11 = (short)-27140;
unsigned long long int var_13 = 16917679254742484746ULL;
unsigned char var_14 = (unsigned char)39;
short var_15 = (short)19408;
int zero = 0;
unsigned short var_16 = (unsigned short)10323;
int var_17 = -1305658405;
short var_18 = (short)-5942;
short var_19 = (short)7767;
_Bool var_20 = (_Bool)0;
short arr_1 [14] ;
signed char arr_3 [14] [14] ;
unsigned short arr_4 [14] [14] ;
unsigned int arr_5 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)24969;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)8674 : (unsigned short)25604;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 3628413485U : 2156141486U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
