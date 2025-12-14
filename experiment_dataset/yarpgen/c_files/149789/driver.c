#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1765817928U;
unsigned int var_2 = 3272808840U;
unsigned char var_4 = (unsigned char)73;
unsigned int var_5 = 3760275032U;
unsigned char var_10 = (unsigned char)121;
unsigned char var_11 = (unsigned char)68;
unsigned char var_12 = (unsigned char)247;
unsigned int var_13 = 2321850845U;
unsigned int var_14 = 1565095058U;
int zero = 0;
unsigned int var_15 = 541646180U;
unsigned int var_16 = 1416866662U;
unsigned int var_17 = 2243275764U;
unsigned char var_18 = (unsigned char)243;
unsigned int var_19 = 736681074U;
unsigned char var_20 = (unsigned char)50;
unsigned int arr_5 [24] [24] ;
unsigned int arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 3268112357U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 715354712U : 3107740172U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
