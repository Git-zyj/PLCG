#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)25765;
unsigned short var_8 = (unsigned short)7919;
long long int var_9 = 1228918186538057049LL;
_Bool var_11 = (_Bool)0;
int var_17 = 2058156288;
int zero = 0;
unsigned int var_19 = 1226899058U;
unsigned short var_20 = (unsigned short)21064;
short var_21 = (short)-26661;
int var_22 = 1629423051;
unsigned long long int var_23 = 10595141334733784330ULL;
short var_24 = (short)-22926;
unsigned long long int arr_1 [12] ;
_Bool arr_2 [12] ;
unsigned long long int arr_10 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 10427369242893172424ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 5076370328829569548ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
