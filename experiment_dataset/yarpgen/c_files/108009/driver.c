#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_5 = 170433777U;
long long int var_8 = -2192221758089022042LL;
long long int var_12 = 4108586091996994095LL;
long long int var_13 = -8919578680088012807LL;
short var_15 = (short)32736;
int zero = 0;
unsigned long long int var_17 = 959859356358647435ULL;
unsigned int var_18 = 2756940056U;
int var_19 = 1634602670;
unsigned long long int var_20 = 14756019609356365209ULL;
short var_21 = (short)-1701;
long long int var_22 = -277328692034261525LL;
signed char arr_8 [18] [18] [18] ;
unsigned long long int arr_9 [22] ;
unsigned short arr_14 [22] ;
short arr_15 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = 3402329872004088210ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (unsigned short)51390;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)26645 : (short)2474;
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
