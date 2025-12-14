#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-51;
long long int var_3 = 7479610503137582161LL;
long long int var_4 = 3824544671997275189LL;
_Bool var_6 = (_Bool)0;
long long int var_8 = -6317336645933278204LL;
unsigned char var_10 = (unsigned char)109;
unsigned int var_11 = 1376174347U;
unsigned int var_13 = 3701606566U;
unsigned int var_15 = 668185406U;
int zero = 0;
long long int var_16 = 8111337767202798633LL;
signed char var_17 = (signed char)-56;
signed char var_18 = (signed char)-114;
long long int var_19 = -9037280384130155497LL;
unsigned char var_20 = (unsigned char)72;
int arr_6 [24] ;
long long int arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 888737608;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = -5413337453623646116LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
