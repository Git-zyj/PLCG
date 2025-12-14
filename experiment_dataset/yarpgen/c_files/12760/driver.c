#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15444141445274042614ULL;
unsigned short var_1 = (unsigned short)12526;
int var_3 = -1816110443;
unsigned short var_4 = (unsigned short)63398;
unsigned short var_5 = (unsigned short)48629;
unsigned long long int var_6 = 9478568260013528900ULL;
long long int var_8 = -1942959351964305887LL;
unsigned char var_9 = (unsigned char)70;
int var_10 = -2142124522;
long long int var_11 = -2198701595648388465LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = 1341320800;
unsigned int var_14 = 1296364003U;
signed char var_15 = (signed char)55;
unsigned short var_16 = (unsigned short)17123;
int var_17 = -8452656;
short arr_0 [13] ;
unsigned long long int arr_8 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)4512;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 16477170022175355084ULL : 12616097419754446016ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
