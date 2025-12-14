#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2642226010U;
_Bool var_7 = (_Bool)1;
long long int var_11 = -5567080169528735396LL;
int zero = 0;
signed char var_13 = (signed char)14;
unsigned long long int var_14 = 5110986762512013736ULL;
signed char var_15 = (signed char)-58;
unsigned char var_16 = (unsigned char)87;
int var_17 = 1994968257;
int var_18 = 1282993835;
_Bool arr_1 [10] ;
unsigned short arr_2 [10] ;
unsigned long long int arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)59499;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 10568575258235871597ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
