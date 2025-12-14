#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2206154330791613395LL;
unsigned long long int var_1 = 139603418914361140ULL;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2425056307U;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_14 = 5567059607795109546LL;
unsigned short var_15 = (unsigned short)33564;
short var_16 = (short)25646;
short var_17 = (short)25346;
long long int arr_3 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -5354729915398299314LL;
}

void checksum() {
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
