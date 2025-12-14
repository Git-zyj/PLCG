#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32187;
unsigned long long int var_1 = 1194278611273210839ULL;
signed char var_2 = (signed char)61;
unsigned short var_3 = (unsigned short)12262;
int var_4 = -1691901853;
signed char var_5 = (signed char)-31;
long long int var_6 = 3188508562266420998LL;
signed char var_8 = (signed char)88;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned short var_12 = (unsigned short)58731;
int var_13 = 836376589;
int var_14 = -111750181;
unsigned short var_15 = (unsigned short)47196;
int zero = 0;
short var_16 = (short)816;
unsigned int var_17 = 264529691U;
short var_18 = (short)5740;
_Bool var_19 = (_Bool)1;
short arr_3 [20] ;
unsigned short arr_4 [20] ;
signed char arr_10 [20] [20] ;
long long int arr_11 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-24201 : (short)-1257;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)13874 : (unsigned short)26427;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)122 : (signed char)53;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 9201759084315816362LL : 7415627395266153786LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
