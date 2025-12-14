#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28575;
short var_3 = (short)35;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)40;
int var_7 = -950661;
signed char var_8 = (signed char)-28;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)4667;
unsigned long long int var_12 = 13417895086592803027ULL;
_Bool var_13 = (_Bool)0;
long long int arr_0 [11] ;
signed char arr_2 [11] [11] ;
long long int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -4078359711619208638LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -2768835022201128821LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
