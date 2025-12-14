#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_6 = -2050636936;
unsigned long long int var_7 = 15415446478615264205ULL;
unsigned long long int var_11 = 13863853751345112950ULL;
signed char var_12 = (signed char)(-127 - 1);
unsigned long long int var_13 = 344848213381811644ULL;
unsigned char var_14 = (unsigned char)3;
int zero = 0;
unsigned long long int var_15 = 214412837133640395ULL;
long long int var_16 = 1784832467257325922LL;
long long int var_17 = -1347750763892716957LL;
long long int arr_0 [18] ;
long long int arr_2 [18] [18] ;
int arr_3 [18] ;
unsigned char arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -6580358630961079809LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -3528436380149392139LL : -1456028587620476739LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -28056010 : 1302588290;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)176 : (unsigned char)108;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
