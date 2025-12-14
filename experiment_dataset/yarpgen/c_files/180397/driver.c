#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1206586162U;
_Bool var_5 = (_Bool)1;
short var_7 = (short)15826;
short var_10 = (short)-26220;
unsigned long long int var_15 = 10548993266007190449ULL;
int zero = 0;
unsigned long long int var_16 = 6958906742959624507ULL;
long long int var_17 = 2287006230892220037LL;
unsigned int var_18 = 2645532929U;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1226872967U;
unsigned char var_22 = (unsigned char)208;
unsigned int var_23 = 3306424955U;
long long int var_24 = -430967882467691875LL;
unsigned char var_25 = (unsigned char)155;
short var_26 = (short)31859;
short var_27 = (short)-5796;
short var_28 = (short)8780;
short arr_0 [24] ;
long long int arr_3 [24] [24] ;
short arr_5 [24] ;
unsigned long long int arr_10 [24] ;
long long int arr_2 [24] ;
unsigned int arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)-11608;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = -3197033511761650841LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (short)-4056;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 3767468073388061374ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -4356448043396387174LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1848319625U : 2878634045U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
