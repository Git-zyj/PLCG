#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)149;
long long int var_6 = 3693055022818750565LL;
unsigned int var_12 = 2054083925U;
unsigned short var_13 = (unsigned short)53301;
signed char var_15 = (signed char)90;
int zero = 0;
long long int var_19 = 2858749570694543823LL;
long long int var_20 = -5307342507785635364LL;
int var_21 = 1923106391;
_Bool var_22 = (_Bool)0;
long long int var_23 = -1950692319551493038LL;
unsigned char arr_4 [15] ;
unsigned long long int arr_7 [20] [20] ;
long long int arr_8 [20] [20] ;
long long int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = 10537812055615836408ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = 2494736934910550156LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 2982948270707349503LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
