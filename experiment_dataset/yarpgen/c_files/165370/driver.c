#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -372339730;
unsigned int var_3 = 3050745449U;
unsigned int var_4 = 3858244585U;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 1941723037U;
unsigned long long int var_9 = 6655905477109917069ULL;
int zero = 0;
signed char var_10 = (signed char)8;
short var_11 = (short)-28816;
unsigned long long int var_12 = 183945454919625674ULL;
short var_13 = (short)-10201;
unsigned int var_14 = 3327763067U;
unsigned int var_15 = 3692428878U;
short var_16 = (short)27683;
int arr_0 [21] ;
unsigned long long int arr_1 [21] ;
signed char arr_3 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 2075064874;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 17057212011887709137ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)105;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
