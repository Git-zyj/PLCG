#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3121816258967899657ULL;
int var_4 = 1853271384;
long long int var_8 = -3718396937331334235LL;
signed char var_10 = (signed char)78;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 5401885547985647332ULL;
unsigned char var_13 = (unsigned char)218;
long long int var_14 = 8541029667159695666LL;
int var_15 = 1177989377;
long long int var_16 = -1794097815949247791LL;
_Bool var_17 = (_Bool)1;
unsigned long long int arr_8 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 8459027815343143073ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
