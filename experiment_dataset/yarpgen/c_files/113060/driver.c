#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2023065580379767293LL;
long long int var_1 = 2284655307604846362LL;
unsigned long long int var_3 = 6259237236862636810ULL;
unsigned char var_5 = (unsigned char)167;
int var_6 = 1155614105;
unsigned short var_7 = (unsigned short)26181;
unsigned long long int var_10 = 8902476920037930564ULL;
unsigned long long int var_12 = 8089837646273479035ULL;
int zero = 0;
long long int var_14 = -7039025185506894961LL;
unsigned long long int var_15 = 16223699877622240524ULL;
unsigned char var_16 = (unsigned char)188;
unsigned int arr_1 [20] [20] ;
unsigned long long int arr_3 [20] ;
int arr_4 [20] ;
signed char arr_5 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 306285255U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 15738701658023662564ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 452617103;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-59;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
