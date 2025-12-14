#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31751;
int var_5 = 318345111;
unsigned int var_6 = 1653725554U;
unsigned long long int var_8 = 11337338893569218342ULL;
int zero = 0;
int var_11 = 767143037;
signed char var_12 = (signed char)28;
int var_13 = 1648972351;
unsigned long long int var_14 = 3902663887429943255ULL;
unsigned long long int arr_1 [20] [20] ;
long long int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 7967406911124219337ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = -4556221705666592798LL;
}

void checksum() {
    hash(&seed, var_11);
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
