#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)237;
unsigned long long int var_8 = 4114129336447156090ULL;
int var_9 = 453564927;
_Bool var_10 = (_Bool)0;
long long int var_12 = 1367520582509254426LL;
int var_14 = -1634340051;
int zero = 0;
unsigned char var_15 = (unsigned char)160;
long long int var_16 = 5141783445681812432LL;
unsigned char var_17 = (unsigned char)253;
long long int var_18 = -1069324035521469654LL;
unsigned int var_19 = 3967179973U;
unsigned int var_20 = 3740834104U;
signed char arr_1 [24] [24] ;
long long int arr_2 [24] [24] ;
unsigned long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = -2340676923156331188LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 2637649554772901318ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
