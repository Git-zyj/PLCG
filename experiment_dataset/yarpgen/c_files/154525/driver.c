#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -527013380;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-127;
short var_4 = (short)-7599;
long long int var_5 = -8462944462224917414LL;
signed char var_11 = (signed char)-33;
int zero = 0;
unsigned long long int var_12 = 38198724755328804ULL;
unsigned long long int var_13 = 13841259490966081197ULL;
signed char var_14 = (signed char)-79;
signed char var_15 = (signed char)7;
signed char var_16 = (signed char)43;
short var_17 = (short)-6460;
long long int var_18 = 6833189701648912602LL;
short arr_0 [18] ;
short arr_2 [13] ;
unsigned short arr_3 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-22275;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)-15551;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)13728;
}

void checksum() {
    hash(&seed, var_12);
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
