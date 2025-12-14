#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 8468696501764586388LL;
unsigned short var_7 = (unsigned short)63783;
short var_8 = (short)-28349;
long long int var_9 = 753771110323671604LL;
unsigned short var_13 = (unsigned short)7495;
_Bool var_14 = (_Bool)0;
unsigned long long int var_17 = 3301089299725110603ULL;
int zero = 0;
unsigned long long int var_20 = 503868976656664702ULL;
unsigned long long int var_21 = 809530741227678651ULL;
unsigned short var_22 = (unsigned short)12983;
unsigned short var_23 = (unsigned short)43461;
signed char var_24 = (signed char)-11;
unsigned short arr_1 [19] ;
unsigned long long int arr_3 [19] ;
unsigned long long int arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)13088;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 10281742798254314053ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 686117913622639678ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
