#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21029;
unsigned long long int var_1 = 12788030302655351052ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_7 = 8222612573024954029ULL;
unsigned char var_8 = (unsigned char)188;
long long int var_11 = -1170784797527870742LL;
long long int var_15 = 7673191977166523270LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)21;
unsigned int var_18 = 3705360672U;
unsigned int var_19 = 383316493U;
short arr_10 [23] [23] [23] [23] ;
unsigned long long int arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-7253 : (short)-1127;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 5663123804913492221ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
