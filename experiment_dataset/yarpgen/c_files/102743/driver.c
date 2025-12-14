#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)76;
_Bool var_1 = (_Bool)1;
unsigned char var_6 = (unsigned char)191;
unsigned long long int var_7 = 6156002271701034800ULL;
unsigned short var_8 = (unsigned short)35820;
long long int var_10 = 7439875402752880600LL;
unsigned char var_11 = (unsigned char)130;
unsigned char var_12 = (unsigned char)244;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_15 = 6506306157068506522LL;
unsigned int var_16 = 3109456767U;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1067773128U;
long long int var_19 = -2428615283790597310LL;
int var_20 = -452002371;
unsigned long long int arr_0 [14] [14] ;
unsigned long long int arr_1 [14] ;
int arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 7552713328856398458ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 12225335142755352849ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 1767066292;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
