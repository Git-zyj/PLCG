#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11644298106516229004ULL;
unsigned char var_1 = (unsigned char)21;
unsigned long long int var_2 = 17633976812879794922ULL;
unsigned long long int var_5 = 14224847564902474095ULL;
long long int var_7 = -1428415999217770505LL;
signed char var_9 = (signed char)29;
signed char var_10 = (signed char)18;
signed char var_11 = (signed char)9;
int zero = 0;
unsigned char var_13 = (unsigned char)233;
unsigned int var_14 = 2094863366U;
short var_15 = (short)-2192;
short var_16 = (short)-21592;
unsigned char var_17 = (unsigned char)100;
unsigned short var_18 = (unsigned short)24735;
unsigned char var_19 = (unsigned char)22;
unsigned short var_20 = (unsigned short)64079;
unsigned char var_21 = (unsigned char)23;
long long int var_22 = -5720849326814031676LL;
short var_23 = (short)19448;
unsigned char var_24 = (unsigned char)1;
unsigned int var_25 = 1137250140U;
unsigned long long int var_26 = 12450784283053566319ULL;
unsigned char arr_0 [10] ;
unsigned char arr_1 [10] [10] ;
_Bool arr_3 [16] ;
unsigned int arr_6 [16] [16] ;
signed char arr_14 [23] [23] ;
signed char arr_15 [23] ;
long long int arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 1308015314U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 2304552246560803972LL : 656506527251580319LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
