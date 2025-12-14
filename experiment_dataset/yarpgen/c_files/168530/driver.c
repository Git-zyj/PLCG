#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1868663043U;
int var_3 = 659546373;
unsigned char var_5 = (unsigned char)223;
int var_9 = 1908665644;
unsigned short var_14 = (unsigned short)51891;
short var_17 = (short)-3794;
int zero = 0;
unsigned char var_19 = (unsigned char)189;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)26634;
short var_22 = (short)-6633;
signed char var_23 = (signed char)-15;
long long int var_24 = -2292672761963728883LL;
signed char arr_0 [19] ;
unsigned long long int arr_1 [19] [19] ;
int arr_2 [19] ;
long long int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 15791104125100209601ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 154655357;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -3067604191633939620LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
