#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 5655791908889191082ULL;
short var_10 = (short)27319;
unsigned long long int var_11 = 8113414651828890156ULL;
short var_12 = (short)-23990;
signed char var_13 = (signed char)-41;
long long int var_15 = -2940034759541741894LL;
int zero = 0;
unsigned int var_19 = 3377960715U;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-71;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 2706654581335663713ULL;
unsigned long long int arr_1 [10] [10] ;
signed char arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 17802930820329476210ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)112;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
