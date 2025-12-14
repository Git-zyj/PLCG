#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int var_15 = 2053225809;
long long int var_16 = 5558963332919428343LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_19 = 439176661;
int var_20 = -599682521;
int var_21 = 2113287728;
long long int var_22 = -3201646518630258456LL;
long long int var_23 = -8781022708587355903LL;
int var_24 = 689747829;
long long int var_25 = -861942243807759013LL;
int var_26 = -1822802091;
int var_27 = 1617076665;
long long int var_28 = 7458891300776412255LL;
long long int var_29 = -5686340592874150418LL;
long long int arr_0 [14] ;
long long int arr_1 [14] ;
_Bool arr_2 [14] [14] ;
long long int arr_3 [14] ;
long long int arr_4 [14] ;
int arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 1306518092740730522LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -4698731434631919304LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -5298496508298717352LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -8911219220578702587LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 1061964887;
}

void checksum() {
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
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
