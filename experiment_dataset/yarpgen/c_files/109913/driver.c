#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8928500388385315842LL;
long long int var_5 = 1678731830300747825LL;
long long int var_6 = 3074340148556012356LL;
unsigned int var_7 = 3822545832U;
unsigned long long int var_8 = 17293579411809074754ULL;
short var_11 = (short)24990;
int zero = 0;
unsigned long long int var_12 = 18108813835519324424ULL;
unsigned long long int var_13 = 14101637995210171586ULL;
signed char var_14 = (signed char)-81;
short var_15 = (short)4283;
unsigned long long int var_16 = 12179199437629051262ULL;
signed char arr_0 [10] ;
signed char arr_1 [10] ;
signed char arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
