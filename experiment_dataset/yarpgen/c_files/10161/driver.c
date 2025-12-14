#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2947331327962623428LL;
long long int var_3 = 7877630392419576918LL;
signed char var_14 = (signed char)-62;
int zero = 0;
signed char var_15 = (signed char)113;
unsigned int var_16 = 4215665068U;
unsigned char var_17 = (unsigned char)0;
int var_18 = -127866739;
unsigned char arr_1 [14] ;
int arr_2 [14] ;
unsigned long long int arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 282308961;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 7111849632664260933ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
