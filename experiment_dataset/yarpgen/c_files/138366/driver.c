#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1219038037920893140LL;
long long int var_2 = 5279416254089655515LL;
long long int var_3 = -8484937359900531882LL;
unsigned int var_5 = 3691558787U;
unsigned int var_6 = 2898495611U;
unsigned int var_8 = 1558544710U;
unsigned int var_11 = 3309395787U;
long long int var_12 = 2302714216339113599LL;
int zero = 0;
unsigned long long int var_13 = 7621378389749940132ULL;
long long int var_14 = -4830933224061302413LL;
unsigned int var_15 = 325706697U;
long long int var_16 = 4513454155939120455LL;
unsigned long long int arr_0 [24] [24] ;
unsigned int arr_1 [24] [24] ;
unsigned int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 17423564744447772051ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 923449790U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 2359489663U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
