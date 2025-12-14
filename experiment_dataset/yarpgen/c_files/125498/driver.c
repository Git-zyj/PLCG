#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1163729298;
signed char var_4 = (signed char)5;
signed char var_5 = (signed char)96;
signed char var_7 = (signed char)-96;
unsigned long long int var_8 = 2561668021596094413ULL;
int var_9 = -2016935835;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)89;
signed char var_14 = (signed char)-114;
int var_15 = 2140594614;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 540460942U;
signed char var_18 = (signed char)-74;
long long int arr_0 [13] ;
short arr_1 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 8295349676984116130LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-20249;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
