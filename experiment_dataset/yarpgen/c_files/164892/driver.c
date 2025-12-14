#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3694006903U;
signed char var_4 = (signed char)119;
signed char var_15 = (signed char)-121;
int zero = 0;
unsigned long long int var_18 = 10020990295113558926ULL;
unsigned short var_19 = (unsigned short)12835;
unsigned int var_20 = 2661418122U;
unsigned int arr_5 [24] ;
long long int arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 2865206824U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = -4255996470923996350LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
