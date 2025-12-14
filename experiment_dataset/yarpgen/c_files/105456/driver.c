#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 936174341;
_Bool var_2 = (_Bool)0;
int var_3 = 1562219210;
int var_4 = -1625424395;
long long int var_7 = -6928197630654813693LL;
unsigned char var_9 = (unsigned char)108;
long long int var_11 = 2075363805789740739LL;
long long int var_12 = 543396302794591224LL;
int zero = 0;
short var_14 = (short)22594;
unsigned int var_15 = 2679098506U;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)110;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 10975442969742074326ULL;
unsigned int var_20 = 2076640505U;
unsigned int arr_0 [20] ;
long long int arr_1 [20] ;
int arr_4 [16] ;
unsigned char arr_6 [16] ;
unsigned short arr_2 [20] ;
unsigned char arr_3 [20] ;
short arr_7 [16] [16] ;
short arr_11 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 1001930607U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3236867620876637057LL : -7976744231620725587LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -1899770712;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)41088 : (unsigned short)9095;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)237 : (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-27321;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (short)23627;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
