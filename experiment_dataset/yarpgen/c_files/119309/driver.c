#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1560465319U;
long long int var_5 = 456488300339781340LL;
unsigned int var_8 = 392227589U;
long long int var_10 = 5572154043463290014LL;
unsigned int var_11 = 2672930949U;
int zero = 0;
long long int var_14 = -816911510015919945LL;
short var_15 = (short)-10893;
unsigned int var_16 = 3867650499U;
unsigned int arr_0 [21] ;
long long int arr_2 [21] ;
unsigned int arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 3006300567U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -3540755894059714051LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1901470599U : 2734236986U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
