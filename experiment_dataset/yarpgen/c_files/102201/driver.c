#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 336835090;
_Bool var_2 = (_Bool)0;
int var_3 = -272055719;
signed char var_7 = (signed char)-91;
short var_8 = (short)-13895;
unsigned long long int var_9 = 2547174002319042481ULL;
int var_12 = 1775242857;
unsigned long long int var_14 = 5567898644464657603ULL;
unsigned int var_15 = 1266514307U;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)45399;
_Bool var_18 = (_Bool)1;
short var_19 = (short)5422;
int zero = 0;
int var_20 = 330497882;
int var_21 = -1283848283;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)16170;
unsigned char arr_0 [23] ;
unsigned int arr_1 [23] ;
_Bool arr_3 [23] [23] ;
unsigned long long int arr_5 [23] [23] [23] ;
unsigned long long int arr_6 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 3704364638U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 15102051117191184456ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 15990489199263220589ULL : 17264797554269582980ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_6 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
