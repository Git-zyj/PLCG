#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5551129617219992186LL;
signed char var_4 = (signed char)103;
_Bool var_7 = (_Bool)0;
signed char var_12 = (signed char)-103;
int zero = 0;
signed char var_14 = (signed char)-48;
int var_15 = 1273073027;
signed char var_16 = (signed char)-22;
int var_17 = -1908616054;
int var_18 = 1310825292;
unsigned short var_19 = (unsigned short)46167;
unsigned char var_20 = (unsigned char)105;
long long int arr_0 [13] ;
unsigned int arr_4 [13] [13] ;
long long int arr_8 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -2999285421268013283LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 1565596708U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 8098834456363228076LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
