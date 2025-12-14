#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)62;
signed char var_5 = (signed char)-89;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 2794259624U;
unsigned int var_11 = 1315892562U;
unsigned long long int var_15 = 6235976795912820418ULL;
long long int var_18 = 1314928032617923270LL;
int zero = 0;
unsigned char var_20 = (unsigned char)239;
unsigned char var_21 = (unsigned char)198;
unsigned long long int var_22 = 2241554994828995492ULL;
unsigned long long int var_23 = 4716055287854909203ULL;
long long int var_24 = 7010729653804784061LL;
unsigned long long int var_25 = 7511026518447894493ULL;
unsigned long long int arr_6 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 18072609407167608547ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
