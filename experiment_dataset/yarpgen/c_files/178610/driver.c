#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5627784824195977988LL;
unsigned char var_2 = (unsigned char)232;
unsigned short var_3 = (unsigned short)16089;
int var_4 = 1306803652;
unsigned short var_5 = (unsigned short)33682;
unsigned short var_8 = (unsigned short)11336;
unsigned long long int var_9 = 10954740263734555220ULL;
unsigned int var_11 = 2749280705U;
unsigned short var_13 = (unsigned short)5246;
int zero = 0;
unsigned short var_14 = (unsigned short)60468;
unsigned short var_15 = (unsigned short)53793;
short var_16 = (short)-23209;
int var_17 = 2091294157;
unsigned int var_18 = 1026028154U;
unsigned char var_19 = (unsigned char)10;
unsigned int arr_0 [11] ;
short arr_1 [11] [11] ;
unsigned short arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 4222670623U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-14749;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)20182;
}

void checksum() {
    hash(&seed, var_14);
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
