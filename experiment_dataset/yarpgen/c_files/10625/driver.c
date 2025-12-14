#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17357373986380612617ULL;
unsigned short var_1 = (unsigned short)4905;
_Bool var_2 = (_Bool)0;
unsigned int var_5 = 723881778U;
signed char var_8 = (signed char)6;
signed char var_11 = (signed char)113;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)42236;
short var_14 = (short)-31653;
unsigned short var_15 = (unsigned short)26183;
int zero = 0;
unsigned long long int var_17 = 9431812761656630485ULL;
unsigned int var_18 = 2403641U;
long long int var_19 = -1464042410526508176LL;
signed char var_20 = (signed char)37;
unsigned short var_21 = (unsigned short)62129;
unsigned short arr_1 [15] [15] ;
unsigned int arr_3 [15] ;
long long int arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)24887 : (unsigned short)46059;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2420828277U : 2774803423U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 5438363024058448805LL : 7056836374916388290LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
