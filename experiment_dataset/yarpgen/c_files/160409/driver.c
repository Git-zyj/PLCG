#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6985919063968476602LL;
unsigned long long int var_2 = 12205573936219859834ULL;
unsigned long long int var_3 = 1297999557864960129ULL;
long long int var_4 = -9182185924015929870LL;
unsigned int var_6 = 2534089927U;
signed char var_9 = (signed char)118;
long long int var_10 = -1613880709645714094LL;
int var_11 = -13053410;
int zero = 0;
signed char var_12 = (signed char)24;
unsigned int var_13 = 860863992U;
int var_14 = 1819109118;
signed char var_15 = (signed char)116;
unsigned char var_16 = (unsigned char)79;
long long int var_17 = 6034623506014843073LL;
unsigned char arr_0 [23] ;
long long int arr_2 [23] [23] [23] ;
int arr_3 [23] [23] [23] ;
unsigned char arr_4 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 3399265928141269373LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 736029287;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)109;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
