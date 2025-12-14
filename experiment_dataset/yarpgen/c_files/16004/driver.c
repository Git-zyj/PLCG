#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 610490238;
unsigned long long int var_2 = 18276811389812032710ULL;
short var_6 = (short)4318;
long long int var_9 = -2388080612520470967LL;
unsigned short var_10 = (unsigned short)40153;
unsigned char var_11 = (unsigned char)42;
long long int var_12 = 8948659574408780580LL;
unsigned int var_14 = 2505171163U;
short var_15 = (short)-10604;
int zero = 0;
unsigned int var_18 = 52675221U;
unsigned short var_19 = (unsigned short)17271;
unsigned short var_20 = (unsigned short)45543;
unsigned short var_21 = (unsigned short)5185;
unsigned int var_22 = 1109430774U;
signed char var_23 = (signed char)-3;
unsigned char var_24 = (unsigned char)25;
long long int var_25 = 873805785768119092LL;
signed char var_26 = (signed char)-49;
unsigned int var_27 = 889060468U;
long long int var_28 = -3108066542350934303LL;
signed char arr_0 [24] [24] ;
int arr_1 [24] ;
unsigned int arr_2 [24] [24] ;
unsigned short arr_3 [24] [24] ;
long long int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -606673743;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 2598938569U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)42613;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 4974897023290798895LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
