#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 12520874941237903593ULL;
short var_2 = (short)-30032;
long long int var_4 = -304335635099906507LL;
unsigned short var_6 = (unsigned short)50593;
short var_8 = (short)19752;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_10 = (short)-30841;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-107;
unsigned short var_13 = (unsigned short)21229;
unsigned int var_14 = 3624262255U;
signed char var_15 = (signed char)-69;
_Bool arr_0 [11] ;
long long int arr_1 [11] ;
int arr_2 [11] ;
int arr_3 [11] ;
int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 5774974227192806060LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -1465076584;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -1700867086;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1489165007 : 1943558316;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
