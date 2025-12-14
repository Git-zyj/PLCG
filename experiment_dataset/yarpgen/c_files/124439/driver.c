#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5877750229241970116ULL;
signed char var_1 = (signed char)-25;
long long int var_2 = -2842031644832070451LL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
long long int var_5 = -7457896373933434649LL;
unsigned short var_7 = (unsigned short)38623;
unsigned int var_8 = 2849719997U;
long long int var_9 = -4191799523489948667LL;
int zero = 0;
signed char var_10 = (signed char)-42;
long long int var_11 = 19089885839475484LL;
unsigned short var_12 = (unsigned short)1013;
long long int var_13 = -1913408016847200113LL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)54;
int arr_4 [10] ;
long long int arr_5 [10] ;
short arr_9 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = -229080237;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = -3728208855829679429LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (short)-28551;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
