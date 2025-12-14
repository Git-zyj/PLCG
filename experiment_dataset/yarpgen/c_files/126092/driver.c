#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2467857922U;
long long int var_3 = 3764828033815512803LL;
signed char var_5 = (signed char)99;
unsigned char var_6 = (unsigned char)93;
int var_7 = -1582876971;
signed char var_8 = (signed char)-120;
unsigned long long int var_9 = 17411964207401888326ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)41;
short var_13 = (short)-22011;
unsigned long long int var_14 = 6131995895681330089ULL;
unsigned long long int var_15 = 11674810137860545187ULL;
unsigned char var_16 = (unsigned char)136;
_Bool arr_1 [17] ;
unsigned long long int arr_3 [17] ;
unsigned long long int arr_5 [17] ;
_Bool arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 16002375043738483451ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 7175321003627057743ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
