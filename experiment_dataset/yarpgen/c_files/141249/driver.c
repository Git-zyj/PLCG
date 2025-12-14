#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2041866698;
unsigned int var_3 = 3624655586U;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3808069791U;
int var_7 = -740055558;
_Bool var_10 = (_Bool)0;
unsigned int var_16 = 2210483021U;
int zero = 0;
unsigned int var_17 = 2787557447U;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2880587068U;
_Bool arr_1 [17] [17] ;
int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -1367410395;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
