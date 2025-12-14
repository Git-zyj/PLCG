#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)236;
unsigned char var_5 = (unsigned char)93;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int var_10 = -790339108;
short var_11 = (short)-28702;
short var_12 = (short)-11675;
int zero = 0;
unsigned char var_16 = (unsigned char)61;
_Bool var_17 = (_Bool)0;
long long int var_18 = 8498660517501005400LL;
_Bool var_19 = (_Bool)1;
unsigned long long int arr_0 [16] ;
long long int arr_1 [16] ;
short arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 6105496671396646606ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 7155154817756684431LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)31705;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
