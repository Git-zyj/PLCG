#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)111;
unsigned short var_3 = (unsigned short)41607;
unsigned long long int var_6 = 14984454779717499416ULL;
long long int var_8 = 833762081708006002LL;
unsigned char var_10 = (unsigned char)20;
unsigned char var_11 = (unsigned char)154;
short var_13 = (short)-32364;
int var_14 = -1726542150;
int zero = 0;
unsigned char var_17 = (unsigned char)51;
unsigned long long int var_18 = 17940465614894849555ULL;
long long int var_19 = 5960600558758312045LL;
unsigned long long int var_20 = 5127940786194989846ULL;
int arr_0 [16] ;
unsigned char arr_2 [16] ;
unsigned char arr_3 [16] ;
_Bool arr_4 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -334706735;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
