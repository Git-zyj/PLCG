#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)36026;
unsigned char var_5 = (unsigned char)214;
unsigned long long int var_6 = 14607724120051612825ULL;
short var_7 = (short)1399;
_Bool var_8 = (_Bool)0;
short var_10 = (short)-8578;
int zero = 0;
short var_16 = (short)28741;
unsigned long long int var_17 = 4118262918059724476ULL;
_Bool var_18 = (_Bool)1;
short arr_1 [25] [25] ;
unsigned int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (short)20711;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 535827521U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
