#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_3 = (unsigned char)191;
unsigned int var_5 = 3704214865U;
short var_8 = (short)-13508;
unsigned int var_15 = 835511931U;
int zero = 0;
unsigned int var_16 = 2905861096U;
int var_17 = -771752924;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 13513380254843785245ULL;
long long int var_20 = -4539864683936008688LL;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)92;
unsigned char var_23 = (unsigned char)71;
unsigned short arr_0 [11] ;
signed char arr_1 [11] ;
unsigned short arr_2 [11] ;
int arr_3 [25] ;
unsigned long long int arr_4 [25] ;
unsigned char arr_5 [25] ;
_Bool arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)43100;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)24049 : (unsigned short)57605;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -120398920;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 14706328443677447329ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
