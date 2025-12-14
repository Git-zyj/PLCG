#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4237083673565792306ULL;
unsigned long long int var_3 = 17815061002199938688ULL;
unsigned long long int var_5 = 17089477847026458490ULL;
long long int var_10 = 6217688556116519698LL;
signed char var_13 = (signed char)122;
int zero = 0;
long long int var_16 = 7209920640998150552LL;
short var_17 = (short)16564;
unsigned int var_18 = 3102536657U;
long long int var_19 = 3772324337802325370LL;
int var_20 = -1624054998;
_Bool var_21 = (_Bool)1;
long long int var_22 = 3240064013568183065LL;
long long int arr_0 [16] ;
short arr_2 [20] ;
unsigned long long int arr_3 [20] [20] ;
unsigned long long int arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -4499609967719202716LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)14772;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 17239704336782511486ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 12400190076254610424ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
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
