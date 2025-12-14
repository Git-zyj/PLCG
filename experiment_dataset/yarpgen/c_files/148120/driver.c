#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8035334059485662650ULL;
unsigned long long int var_2 = 14654755532949840747ULL;
unsigned int var_5 = 218858241U;
_Bool var_8 = (_Bool)1;
int var_9 = 821493219;
unsigned int var_11 = 1155145249U;
unsigned short var_12 = (unsigned short)24266;
int var_13 = -1621881318;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 8273616043774725366ULL;
short var_16 = (short)-6965;
unsigned long long int var_17 = 7292536178995501812ULL;
unsigned long long int arr_1 [12] ;
unsigned int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 4817972494274629500ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 1527027192U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
