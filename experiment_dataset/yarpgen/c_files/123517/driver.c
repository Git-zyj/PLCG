#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1158442988;
unsigned short var_5 = (unsigned short)39997;
int var_7 = 1799862371;
signed char var_9 = (signed char)-70;
int zero = 0;
unsigned long long int var_12 = 6967953985300139654ULL;
long long int var_13 = 5189220674312453896LL;
short var_14 = (short)-14850;
unsigned char var_15 = (unsigned char)231;
unsigned char var_16 = (unsigned char)140;
long long int var_17 = 5828341383451276285LL;
_Bool arr_1 [16] ;
long long int arr_5 [16] ;
unsigned short arr_9 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -7002271476082410996LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)9979 : (unsigned short)43264;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
