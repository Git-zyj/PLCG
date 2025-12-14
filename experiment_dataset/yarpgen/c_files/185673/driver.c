#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_10 = (_Bool)0;
unsigned int var_13 = 3409140552U;
unsigned char var_14 = (unsigned char)25;
signed char var_16 = (signed char)-60;
int zero = 0;
unsigned long long int var_17 = 17604801066997691607ULL;
unsigned char var_18 = (unsigned char)183;
int var_19 = -1339670435;
unsigned int var_20 = 1780943696U;
unsigned int var_21 = 4194676354U;
unsigned char var_22 = (unsigned char)195;
short arr_0 [12] ;
unsigned long long int arr_1 [12] ;
unsigned char arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)-201;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 8122435236991105707ULL : 7311268221170091012ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)247;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
