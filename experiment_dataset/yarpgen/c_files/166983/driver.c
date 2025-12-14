#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8517428424672109873LL;
unsigned int var_3 = 1701629902U;
unsigned long long int var_8 = 9847401154859360055ULL;
unsigned int var_14 = 2470141306U;
int zero = 0;
int var_19 = -1880588836;
long long int var_20 = -8136595831021941233LL;
long long int var_21 = -4273840474177673703LL;
unsigned int var_22 = 814791800U;
int arr_4 [20] [20] ;
long long int arr_5 [20] ;
unsigned long long int arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 1912307178;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = -7986396061032684444LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 15051315443319817837ULL : 12930982356286980894ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
