#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)26;
unsigned int var_4 = 3120484408U;
int zero = 0;
unsigned int var_12 = 3044055363U;
unsigned int var_13 = 2652435858U;
short var_14 = (short)5209;
unsigned char var_15 = (unsigned char)24;
unsigned long long int var_16 = 18020296236339831195ULL;
short var_17 = (short)3997;
unsigned int var_18 = 2254452566U;
unsigned int arr_0 [17] ;
unsigned long long int arr_1 [17] [17] ;
short arr_4 [25] ;
unsigned long long int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 2613022286U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 6141193020673436937ULL : 1440669528372123883ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)2906;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 9767873201764388824ULL : 16360644300355635216ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
