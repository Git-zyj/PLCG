#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8483;
signed char var_5 = (signed char)75;
unsigned short var_7 = (unsigned short)16415;
unsigned int var_10 = 74738703U;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = -3941381062047670892LL;
short var_14 = (short)15324;
unsigned int var_15 = 1413165930U;
unsigned int var_16 = 1704396744U;
signed char var_17 = (signed char)83;
long long int var_18 = -4609896192238022942LL;
short var_19 = (short)30049;
long long int arr_0 [10] ;
short arr_1 [10] ;
long long int arr_4 [10] ;
signed char arr_5 [10] [10] ;
signed char arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 4633131178564295239LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)16675;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 462847921688928324LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)37;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)-26;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
