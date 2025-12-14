#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16237888708548539949ULL;
unsigned long long int var_8 = 2315691021457768507ULL;
unsigned char var_10 = (unsigned char)212;
unsigned long long int var_14 = 6856783155829927876ULL;
unsigned long long int var_15 = 3265272621323863417ULL;
int var_16 = 1854405847;
int zero = 0;
int var_18 = 921475674;
unsigned int var_19 = 3156619586U;
short var_20 = (short)16830;
unsigned long long int var_21 = 11669490195955870518ULL;
unsigned int arr_3 [19] [19] ;
signed char arr_6 [19] ;
unsigned char arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 3609952069U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned char)36;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
