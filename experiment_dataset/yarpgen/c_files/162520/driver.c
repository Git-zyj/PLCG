#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)43;
long long int var_4 = 1808837833620975944LL;
unsigned char var_5 = (unsigned char)34;
unsigned long long int var_6 = 4118791226409232412ULL;
unsigned short var_7 = (unsigned short)40472;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)222;
unsigned short var_13 = (unsigned short)16216;
_Bool var_14 = (_Bool)1;
long long int var_15 = 2873460303817713886LL;
unsigned short var_16 = (unsigned short)11;
unsigned short var_17 = (unsigned short)42495;
unsigned short var_18 = (unsigned short)22214;
unsigned long long int var_19 = 1706297113726219034ULL;
unsigned short var_20 = (unsigned short)31488;
unsigned short var_21 = (unsigned short)56757;
unsigned long long int arr_4 [24] [24] ;
long long int arr_7 [24] [24] [24] [24] ;
_Bool arr_8 [24] ;
signed char arr_10 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 13059681951121891229ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -4724066302417916458LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (signed char)97;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
