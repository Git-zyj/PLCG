#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)16;
short var_1 = (short)-14783;
int var_3 = -806812027;
unsigned char var_4 = (unsigned char)247;
long long int var_5 = -4055362573439857425LL;
short var_6 = (short)-20495;
unsigned short var_7 = (unsigned short)56213;
unsigned char var_8 = (unsigned char)143;
unsigned long long int var_9 = 9109064192257509701ULL;
unsigned short var_10 = (unsigned short)14128;
int zero = 0;
unsigned char var_11 = (unsigned char)238;
unsigned short var_12 = (unsigned short)59499;
long long int var_13 = 1954679726624655853LL;
unsigned char var_14 = (unsigned char)184;
short var_15 = (short)3257;
unsigned short var_16 = (unsigned short)382;
int var_17 = -441009113;
short arr_0 [14] ;
unsigned char arr_1 [14] ;
_Bool arr_2 [10] ;
unsigned char arr_3 [10] ;
int arr_4 [10] ;
unsigned short arr_5 [10] ;
unsigned char arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)22253;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 1089082639;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)52570;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)30;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
