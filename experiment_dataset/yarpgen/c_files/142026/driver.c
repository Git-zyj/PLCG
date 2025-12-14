#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2313986608801569224LL;
signed char var_2 = (signed char)88;
unsigned long long int var_3 = 14840295557852331229ULL;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)106;
short var_7 = (short)27589;
int var_8 = 874205463;
int zero = 0;
unsigned int var_10 = 3691271798U;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1671433568U;
unsigned int var_13 = 1844099615U;
short var_14 = (short)20684;
long long int arr_0 [18] ;
signed char arr_3 [18] [18] ;
unsigned long long int arr_10 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 506751408496822245LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = 14219639675147320385ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
