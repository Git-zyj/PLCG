#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10485704509789812857ULL;
long long int var_3 = -2439124299167380936LL;
int var_4 = 1711175989;
long long int var_5 = 465487205804295165LL;
short var_6 = (short)-28447;
unsigned short var_7 = (unsigned short)27244;
int var_9 = 573023714;
short var_10 = (short)-5287;
unsigned short var_11 = (unsigned short)20351;
int zero = 0;
int var_12 = -2053967708;
unsigned int var_13 = 1501049311U;
signed char arr_0 [20] [20] ;
unsigned int arr_1 [20] ;
short arr_3 [20] ;
int arr_4 [20] ;
unsigned char arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 3117494373U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (short)18256;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 1736776756;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned char)179;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
