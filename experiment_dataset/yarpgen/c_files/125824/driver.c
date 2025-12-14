#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 300349361438801357ULL;
long long int var_11 = -5926368491945309925LL;
int zero = 0;
int var_13 = 659994476;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)239;
int var_16 = -1380573472;
unsigned short var_17 = (unsigned short)26820;
unsigned long long int var_18 = 17053803673778576971ULL;
long long int var_19 = -7775637896773932737LL;
signed char var_20 = (signed char)16;
unsigned long long int var_21 = 4807777962399866571ULL;
short arr_0 [21] ;
_Bool arr_1 [21] ;
signed char arr_2 [21] ;
unsigned int arr_5 [21] ;
int arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)1825;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 787341260U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = -325241980;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
