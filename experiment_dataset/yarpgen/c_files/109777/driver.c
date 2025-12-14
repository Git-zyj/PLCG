#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)1;
unsigned char var_3 = (unsigned char)140;
short var_4 = (short)-5945;
unsigned long long int var_5 = 16063585709225361726ULL;
long long int var_6 = -147457283628020580LL;
unsigned long long int var_9 = 2917408737710212865ULL;
int var_11 = 1571354561;
int zero = 0;
short var_13 = (short)-30700;
signed char var_14 = (signed char)9;
short var_15 = (short)21485;
unsigned long long int var_16 = 7777908475560818289ULL;
unsigned short var_17 = (unsigned short)21526;
short arr_0 [14] ;
_Bool arr_1 [14] [14] ;
unsigned int arr_2 [14] ;
unsigned long long int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)18627;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 3162791925U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 11413397053495870767ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
