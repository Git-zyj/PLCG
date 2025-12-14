#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5248198909852376308LL;
int var_5 = -1498819546;
int var_6 = 649896687;
unsigned char var_8 = (unsigned char)77;
long long int var_9 = -3780270540177292881LL;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)96;
int zero = 0;
unsigned long long int var_12 = 1824187968931831148ULL;
signed char var_13 = (signed char)88;
signed char var_14 = (signed char)-87;
long long int var_15 = 5996343769680543882LL;
signed char var_16 = (signed char)-56;
int arr_0 [22] ;
short arr_1 [22] ;
short arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -1316567614;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-17502;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)-30987;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
