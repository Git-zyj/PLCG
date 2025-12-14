#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 12728357278163669966ULL;
long long int var_8 = 6183790767545545099LL;
signed char var_9 = (signed char)12;
short var_10 = (short)30345;
long long int var_13 = -7395597030253924368LL;
int zero = 0;
int var_14 = 1006720247;
unsigned int var_15 = 4150974767U;
unsigned short var_16 = (unsigned short)53088;
signed char var_17 = (signed char)42;
unsigned long long int var_18 = 11018618051852144418ULL;
unsigned long long int var_19 = 2118326656916337699ULL;
int var_20 = -1286126841;
unsigned long long int arr_2 [21] ;
long long int arr_3 [21] [21] [21] ;
long long int arr_6 [21] [21] [21] ;
long long int arr_12 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 926842689718525300ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 5863454350151997368LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 8960414864519304128LL : 6838485623848116830LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 8180035785749968494LL : -5053763336990674335LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
