#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5111194694322838445LL;
unsigned int var_3 = 3320046621U;
signed char var_6 = (signed char)6;
unsigned short var_7 = (unsigned short)49267;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)-22;
int var_13 = -1799849322;
short var_14 = (short)-26220;
int var_15 = 552230079;
unsigned long long int arr_0 [19] ;
int arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1898717381896761341ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 174976282;
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
