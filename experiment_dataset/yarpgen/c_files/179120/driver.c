#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1352893914670823873LL;
unsigned short var_2 = (unsigned short)64725;
signed char var_4 = (signed char)-93;
short var_6 = (short)-24967;
short var_7 = (short)1802;
signed char var_8 = (signed char)-36;
signed char var_9 = (signed char)75;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 2737236742U;
unsigned char var_13 = (unsigned char)253;
unsigned short var_14 = (unsigned short)57716;
unsigned int var_15 = 2642333395U;
short arr_3 [21] [21] ;
unsigned int arr_4 [21] ;
unsigned long long int arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (short)9601;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 3952693347U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 15527588801657823805ULL;
}

void checksum() {
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
