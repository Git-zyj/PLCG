#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22479;
short var_5 = (short)322;
int var_7 = -2124500698;
short var_9 = (short)-18247;
short var_10 = (short)-18580;
long long int var_11 = -8812218759314648875LL;
short var_12 = (short)-4819;
int zero = 0;
short var_14 = (short)32407;
short var_15 = (short)-17103;
short var_16 = (short)-18949;
int var_17 = -1715057077;
_Bool var_18 = (_Bool)0;
long long int var_19 = -643027273221632239LL;
unsigned long long int arr_3 [16] [16] [16] ;
signed char arr_5 [16] [16] ;
short arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 10951544822885223584ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (short)-2262;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
