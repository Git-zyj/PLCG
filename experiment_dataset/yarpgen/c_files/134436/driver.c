#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1323;
unsigned int var_1 = 3306992700U;
unsigned int var_2 = 3626511992U;
unsigned short var_3 = (unsigned short)1493;
unsigned short var_4 = (unsigned short)59330;
unsigned short var_6 = (unsigned short)3626;
unsigned short var_8 = (unsigned short)26565;
unsigned short var_9 = (unsigned short)8663;
unsigned short var_10 = (unsigned short)16940;
unsigned int var_11 = 1252772546U;
unsigned int var_12 = 1264010590U;
unsigned int var_13 = 3382658038U;
int zero = 0;
unsigned short var_14 = (unsigned short)1608;
unsigned int var_15 = 2019463518U;
unsigned short var_16 = (unsigned short)34843;
unsigned short var_17 = (unsigned short)55071;
unsigned int var_18 = 56565976U;
unsigned int arr_2 [20] [20] ;
unsigned int arr_3 [20] [20] ;
unsigned int arr_4 [20] [20] ;
unsigned short arr_5 [20] ;
unsigned short arr_6 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 1301931803U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 4210750033U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 1722027985U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned short)62561;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)44202;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
