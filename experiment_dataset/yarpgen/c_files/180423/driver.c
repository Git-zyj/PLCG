#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 213161148;
short var_2 = (short)-10703;
int var_11 = -457029622;
unsigned short var_13 = (unsigned short)14614;
long long int var_14 = 5937268618873425468LL;
int zero = 0;
unsigned int var_15 = 2683638361U;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 14817040622771841773ULL;
unsigned short var_18 = (unsigned short)41977;
long long int arr_5 [18] [18] ;
_Bool arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 8095012053121587742LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
