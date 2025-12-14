#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3542474174U;
short var_1 = (short)-27472;
short var_3 = (short)15911;
long long int var_5 = -4596403085344817857LL;
long long int var_6 = -1043889800994815506LL;
unsigned long long int var_8 = 2701373372110172003ULL;
int var_9 = 1478672215;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 238908093U;
unsigned char var_15 = (unsigned char)165;
long long int arr_3 [13] [13] ;
_Bool arr_7 [13] [13] [13] ;
unsigned short arr_8 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = -7106182014396047727LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned short)28471;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
