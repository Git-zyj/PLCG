#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1511673305583277302LL;
signed char var_5 = (signed char)113;
unsigned long long int var_7 = 4161028475859086709ULL;
signed char var_11 = (signed char)18;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 6802806011849146577ULL;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 2840078697678792907ULL;
unsigned long long int arr_2 [23] [23] ;
int arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 11976072758937601220ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = -135119492;
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
