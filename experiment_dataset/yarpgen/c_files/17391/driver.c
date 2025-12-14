#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1439288232U;
unsigned int var_2 = 610541048U;
_Bool var_4 = (_Bool)1;
unsigned int var_9 = 3613175060U;
signed char var_11 = (signed char)96;
unsigned long long int var_13 = 1941077731413558516ULL;
unsigned int var_18 = 859340430U;
int zero = 0;
unsigned int var_19 = 1800814476U;
signed char var_20 = (signed char)21;
unsigned char var_21 = (unsigned char)104;
int var_22 = 1408235655;
unsigned char var_23 = (unsigned char)159;
_Bool var_24 = (_Bool)1;
unsigned char arr_2 [17] ;
unsigned short arr_3 [17] ;
int arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)38776;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = -608251513;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
