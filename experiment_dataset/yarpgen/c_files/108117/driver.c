#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33757;
unsigned int var_6 = 3955303605U;
unsigned long long int var_8 = 1295083911270654519ULL;
unsigned short var_10 = (unsigned short)3463;
unsigned int var_11 = 662922935U;
unsigned int var_13 = 434924162U;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1110331687U;
short var_17 = (short)17209;
int var_18 = 573282726;
int var_19 = -1602387745;
int zero = 0;
unsigned long long int var_20 = 12876683444732626365ULL;
unsigned int var_21 = 80736557U;
short var_22 = (short)29921;
short var_23 = (short)-14055;
unsigned int var_24 = 1940256331U;
unsigned int arr_0 [25] ;
unsigned char arr_1 [25] [25] ;
unsigned int arr_2 [25] ;
unsigned long long int arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1186317293U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)102;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 2043448025U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 8764307873794351443ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
