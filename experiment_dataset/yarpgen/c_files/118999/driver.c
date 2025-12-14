#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -6637150061279265101LL;
unsigned int var_7 = 4160002878U;
unsigned char var_8 = (unsigned char)176;
int var_11 = 7685738;
unsigned short var_12 = (unsigned short)10660;
long long int var_14 = -4402485845238357454LL;
int zero = 0;
long long int var_15 = -7511525627362124418LL;
long long int var_16 = -7702413025025214996LL;
unsigned int var_17 = 2235797886U;
unsigned char var_18 = (unsigned char)121;
unsigned short var_19 = (unsigned short)2059;
int arr_0 [24] ;
unsigned int arr_1 [24] [24] ;
int arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 1412944465;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 1432021167U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 630337318;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
