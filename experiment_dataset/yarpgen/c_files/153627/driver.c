#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8250716614283567874LL;
int var_5 = -550034858;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)38942;
unsigned short var_9 = (unsigned short)11548;
int zero = 0;
short var_10 = (short)21246;
short var_11 = (short)3180;
unsigned long long int var_12 = 7817639800304345456ULL;
unsigned long long int var_13 = 15884930821584190803ULL;
short var_14 = (short)28964;
unsigned long long int var_15 = 12707717878555571227ULL;
int var_16 = 1579812033;
int arr_0 [14] ;
signed char arr_1 [14] ;
unsigned int arr_5 [14] ;
signed char arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 393208997;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 2026311429U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)101;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
