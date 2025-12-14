#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 511299752989587704ULL;
unsigned short var_9 = (unsigned short)51023;
long long int var_11 = 6615606069446185695LL;
int zero = 0;
signed char var_15 = (signed char)118;
unsigned char var_16 = (unsigned char)229;
signed char var_17 = (signed char)-66;
unsigned char var_18 = (unsigned char)218;
unsigned long long int var_19 = 9031009637767338813ULL;
unsigned long long int var_20 = 16719807838824283219ULL;
int arr_4 [21] [21] ;
unsigned long long int arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 1364060797;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 3807879754709610000ULL;
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
