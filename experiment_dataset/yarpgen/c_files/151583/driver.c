#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1114654182747849276LL;
unsigned short var_2 = (unsigned short)51758;
int var_5 = 1711944103;
signed char var_7 = (signed char)-114;
long long int var_8 = 1278492903516913546LL;
unsigned char var_9 = (unsigned char)53;
_Bool var_13 = (_Bool)0;
unsigned short var_15 = (unsigned short)58674;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 15698736264706104924ULL;
signed char var_21 = (signed char)-31;
unsigned short var_22 = (unsigned short)6351;
_Bool var_23 = (_Bool)0;
_Bool arr_2 [11] ;
unsigned short arr_5 [11] ;
unsigned long long int arr_6 [11] ;
int arr_7 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned short)1051;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 2864761768322077847ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 234531231;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
