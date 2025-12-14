#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19148;
unsigned long long int var_3 = 13439006548476465841ULL;
unsigned char var_4 = (unsigned char)107;
int var_6 = 1472230056;
unsigned int var_10 = 3284893764U;
int zero = 0;
unsigned int var_11 = 1432494459U;
unsigned long long int var_12 = 14410785638230045649ULL;
short var_13 = (short)13703;
unsigned short var_14 = (unsigned short)18886;
int var_15 = 1863774975;
short arr_1 [12] ;
unsigned long long int arr_2 [12] ;
_Bool arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)-29109;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 14657691860098258478ULL : 300299144816070188ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
