#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 344944348;
unsigned int var_4 = 387290711U;
unsigned int var_8 = 1107360482U;
long long int var_10 = -7992260346061547167LL;
signed char var_11 = (signed char)-101;
long long int var_14 = 57687728982224439LL;
int zero = 0;
unsigned int var_16 = 2567657577U;
short var_17 = (short)-17175;
_Bool var_18 = (_Bool)0;
long long int var_19 = 5428053418528584065LL;
signed char arr_2 [23] ;
long long int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-11 : (signed char)77;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -3677349903556652683LL : 8557084791369378417LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
