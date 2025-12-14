#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14501809861956098173ULL;
unsigned long long int var_1 = 9239998083689505772ULL;
unsigned int var_2 = 2620438776U;
long long int var_3 = -7799461523505466837LL;
short var_4 = (short)-25484;
signed char var_9 = (signed char)-110;
unsigned long long int var_10 = 9172808115446862966ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 14905423012175830390ULL;
unsigned short var_13 = (unsigned short)6532;
int var_14 = 1428157387;
signed char var_15 = (signed char)-41;
int zero = 0;
unsigned short var_16 = (unsigned short)62045;
short var_17 = (short)12633;
long long int arr_4 [17] ;
unsigned int arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 620238594686452063LL : 3953465629950753124LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 1927196419U : 494694271U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
