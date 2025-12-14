#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-102;
signed char var_4 = (signed char)-5;
signed char var_5 = (signed char)50;
long long int var_6 = -2565316170499049969LL;
int var_7 = -670806246;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)42;
int zero = 0;
long long int var_11 = 7505703257527615897LL;
long long int var_12 = -143287479796281514LL;
short var_13 = (short)8105;
signed char arr_2 [24] ;
unsigned int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 4238651433U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
