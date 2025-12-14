#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 580548344U;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-7557;
short var_7 = (short)-5418;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
short var_12 = (short)2957;
long long int var_14 = 374531315035824298LL;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-11594;
int zero = 0;
unsigned int var_17 = 4200372143U;
short var_18 = (short)16776;
unsigned char var_19 = (unsigned char)169;
unsigned int var_20 = 1813509157U;
short var_21 = (short)24665;
unsigned long long int var_22 = 1251510492919445310ULL;
signed char arr_1 [24] [24] ;
_Bool arr_2 [24] [24] ;
int arr_4 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1240802696;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
