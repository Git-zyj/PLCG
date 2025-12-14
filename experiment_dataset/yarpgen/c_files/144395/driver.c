#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)156;
long long int var_1 = 8390013881793230801LL;
signed char var_2 = (signed char)107;
unsigned short var_3 = (unsigned short)48057;
signed char var_5 = (signed char)120;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 1698567799U;
_Bool var_10 = (_Bool)0;
int var_14 = 516315757;
signed char var_15 = (signed char)5;
int zero = 0;
signed char var_17 = (signed char)-31;
long long int var_18 = -6904602500516761310LL;
long long int var_19 = -775639733736769794LL;
unsigned short var_20 = (unsigned short)9533;
short var_21 = (short)25449;
_Bool arr_3 [10] ;
unsigned long long int arr_5 [10] ;
unsigned short arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 10025450278693196855ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)39007;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
