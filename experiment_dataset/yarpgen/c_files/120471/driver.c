#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1962386596300583167ULL;
int var_2 = -570602003;
short var_7 = (short)2817;
unsigned long long int var_9 = 15432782924380652640ULL;
int var_10 = -1546520962;
long long int var_14 = 5308972974229640138LL;
unsigned int var_16 = 2542988809U;
int zero = 0;
unsigned long long int var_18 = 1493841618524081233ULL;
long long int var_19 = -1992986591873773304LL;
signed char var_20 = (signed char)-45;
unsigned char var_21 = (unsigned char)76;
long long int var_22 = 2783490572370344716LL;
signed char arr_0 [15] ;
unsigned int arr_2 [15] ;
short arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 3092071307U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (short)9178;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
