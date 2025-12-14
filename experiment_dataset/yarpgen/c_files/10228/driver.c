#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5819;
short var_2 = (short)5169;
unsigned long long int var_3 = 6904565703930634712ULL;
unsigned int var_4 = 922320555U;
signed char var_5 = (signed char)116;
unsigned short var_6 = (unsigned short)32164;
unsigned long long int var_7 = 18334190301843911986ULL;
unsigned short var_9 = (unsigned short)49843;
short var_11 = (short)7577;
unsigned short var_12 = (unsigned short)48022;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3582640973U;
unsigned short var_15 = (unsigned short)2410;
int var_16 = -58477253;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2036213774U;
_Bool var_19 = (_Bool)1;
unsigned int arr_0 [13] ;
_Bool arr_1 [13] ;
unsigned short arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 3105731757U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)55895 : (unsigned short)30015;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
