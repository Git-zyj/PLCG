#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64337;
long long int var_6 = -1368706575457313764LL;
signed char var_10 = (signed char)86;
long long int var_13 = 8903043490874774820LL;
int zero = 0;
short var_15 = (short)13540;
signed char var_16 = (signed char)-116;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 329552662429515295ULL;
short var_19 = (short)30478;
unsigned int var_20 = 2138800216U;
unsigned int var_21 = 1711724112U;
_Bool arr_1 [19] ;
unsigned short arr_3 [19] [19] ;
unsigned short arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)29558;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37314 : (unsigned short)4114;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
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
