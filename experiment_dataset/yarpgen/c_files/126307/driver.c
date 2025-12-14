#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)40247;
long long int var_4 = 3657875643551520067LL;
signed char var_10 = (signed char)66;
int zero = 0;
unsigned int var_12 = 465510116U;
_Bool var_13 = (_Bool)1;
int var_14 = 1498081445;
unsigned long long int arr_0 [18] ;
unsigned long long int arr_1 [18] ;
unsigned long long int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 10915749761995556369ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 11053963540929526011ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 11924043246648769685ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
