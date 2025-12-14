#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7834817809623247494ULL;
unsigned short var_1 = (unsigned short)30059;
long long int var_3 = -2453543508760150338LL;
short var_5 = (short)21815;
unsigned short var_8 = (unsigned short)60740;
unsigned short var_10 = (unsigned short)63831;
unsigned char var_15 = (unsigned char)160;
int zero = 0;
int var_16 = 1311885187;
signed char var_17 = (signed char)10;
unsigned char var_18 = (unsigned char)90;
unsigned char var_19 = (unsigned char)206;
unsigned char var_20 = (unsigned char)157;
unsigned long long int arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 8260675757018948028ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
