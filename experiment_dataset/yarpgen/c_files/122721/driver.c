#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)24409;
unsigned long long int var_4 = 17002221004227474154ULL;
_Bool var_7 = (_Bool)0;
int var_11 = 2071057806;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 12892914125710399902ULL;
unsigned long long int var_17 = 17648676035805797899ULL;
int var_18 = -1932444447;
signed char var_19 = (signed char)84;
signed char var_20 = (signed char)-81;
unsigned int arr_3 [25] [25] ;
unsigned int arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 3768561176U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 3294207703U : 3683336762U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
