#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)148;
unsigned char var_3 = (unsigned char)87;
unsigned short var_4 = (unsigned short)38802;
signed char var_5 = (signed char)62;
unsigned short var_6 = (unsigned short)28333;
unsigned short var_7 = (unsigned short)63992;
short var_10 = (short)22688;
int var_13 = 82924232;
int var_15 = -1005598256;
int zero = 0;
unsigned short var_17 = (unsigned short)45973;
int var_18 = -911187645;
unsigned short var_19 = (unsigned short)60859;
_Bool var_20 = (_Bool)0;
int arr_6 [11] [11] ;
unsigned short arr_7 [11] [11] [11] ;
int arr_9 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = 636997765;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)3754;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 609206553 : 1682765250;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
