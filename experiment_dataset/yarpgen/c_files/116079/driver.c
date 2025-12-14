#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)-50;
long long int var_6 = 3453949498314750653LL;
unsigned long long int var_7 = 14927311785020812693ULL;
unsigned int var_8 = 1601549334U;
int zero = 0;
unsigned char var_10 = (unsigned char)208;
unsigned long long int var_11 = 4464030236651271714ULL;
signed char var_12 = (signed char)-36;
unsigned long long int var_13 = 10825741678607740688ULL;
unsigned long long int var_14 = 13646004925299977194ULL;
unsigned long long int arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 16364901732091497686ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
