#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 765686804U;
int var_1 = -198990839;
_Bool var_2 = (_Bool)0;
int var_4 = -1019389390;
unsigned int var_6 = 2847332061U;
long long int var_9 = -9213816027439268418LL;
unsigned char var_10 = (unsigned char)130;
int zero = 0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1383947602U;
unsigned char var_14 = (unsigned char)147;
long long int var_15 = 4099014048900682867LL;
unsigned long long int var_16 = 9567340602927848845ULL;
unsigned long long int var_17 = 14680830274559066622ULL;
unsigned short arr_0 [17] ;
int arr_1 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)20063;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 2081901530;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
