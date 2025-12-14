#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 13957915053102963784ULL;
unsigned short var_4 = (unsigned short)10918;
unsigned short var_7 = (unsigned short)47643;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)45979;
short var_11 = (short)-7931;
_Bool var_13 = (_Bool)1;
unsigned long long int var_18 = 5178963405770550199ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)162;
unsigned char var_20 = (unsigned char)232;
short var_21 = (short)-30363;
signed char var_22 = (signed char)65;
short arr_0 [19] ;
signed char arr_1 [19] [19] ;
unsigned long long int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)20372;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 4211845932083002368ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
