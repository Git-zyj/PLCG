#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1583156007;
short var_1 = (short)8808;
short var_4 = (short)-9528;
int var_5 = 284532206;
signed char var_6 = (signed char)98;
short var_10 = (short)-15737;
unsigned short var_12 = (unsigned short)44207;
long long int var_13 = -3105967341160511405LL;
int zero = 0;
unsigned int var_15 = 894821079U;
unsigned int var_16 = 336509115U;
signed char var_17 = (signed char)96;
unsigned long long int arr_0 [18] [18] ;
unsigned short arr_1 [18] ;
unsigned short arr_2 [18] ;
unsigned int arr_3 [18] ;
long long int arr_4 [18] [18] ;
unsigned int arr_5 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 5265518326782879695ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)25811;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)59017;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 3618715459U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 110212530006450782LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1532935211U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
