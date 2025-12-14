#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1962547577U;
unsigned int var_2 = 3995306066U;
int var_5 = -909464466;
signed char var_7 = (signed char)113;
unsigned int var_10 = 1827258959U;
long long int var_12 = -2082040126459588901LL;
int zero = 0;
short var_13 = (short)-22397;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)15;
unsigned int var_16 = 2895330886U;
_Bool var_17 = (_Bool)0;
long long int var_18 = 1019808402243049360LL;
signed char arr_0 [17] [17] ;
signed char arr_1 [17] ;
long long int arr_4 [17] ;
signed char arr_6 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)33;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 170235651858182606LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)15;
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
