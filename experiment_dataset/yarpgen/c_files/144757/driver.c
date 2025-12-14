#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -634135494;
unsigned int var_6 = 2396405579U;
long long int var_7 = 8271199722488654487LL;
int var_10 = 747237100;
signed char var_15 = (signed char)96;
int zero = 0;
signed char var_17 = (signed char)-123;
signed char var_18 = (signed char)-33;
unsigned int var_19 = 1941251461U;
unsigned char var_20 = (unsigned char)102;
signed char var_21 = (signed char)-4;
long long int var_22 = 1562843433967055493LL;
signed char var_23 = (signed char)-75;
unsigned char var_24 = (unsigned char)68;
unsigned int arr_0 [16] ;
long long int arr_1 [16] ;
signed char arr_2 [16] ;
signed char arr_3 [16] [16] [16] ;
signed char arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 184051900U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -6198589987708275447LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (signed char)-68;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
