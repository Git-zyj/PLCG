#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 894381218U;
unsigned char var_1 = (unsigned char)30;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 2809001073U;
unsigned int var_5 = 620829817U;
long long int var_6 = 4324972172635480452LL;
short var_8 = (short)21099;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)38735;
signed char var_11 = (signed char)2;
short var_12 = (short)351;
unsigned char var_13 = (unsigned char)43;
unsigned int var_14 = 3564388389U;
unsigned char var_15 = (unsigned char)12;
unsigned short arr_12 [22] ;
unsigned long long int arr_13 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)19119 : (unsigned short)30668;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 1467967772375280200ULL : 4841562435562825804ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
