#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)12;
long long int var_11 = 3899607723935818170LL;
unsigned long long int var_16 = 13515545706665567641ULL;
unsigned long long int var_18 = 2164995586618551517ULL;
int zero = 0;
int var_20 = 1735324377;
long long int var_21 = -6831334162521268529LL;
unsigned short var_22 = (unsigned short)64831;
unsigned int var_23 = 3950323566U;
unsigned short arr_1 [18] ;
unsigned long long int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)50085;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 18382434830189232665ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
