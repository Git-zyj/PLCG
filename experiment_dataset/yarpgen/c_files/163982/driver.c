#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2762391426274906315ULL;
short var_1 = (short)-25541;
unsigned short var_3 = (unsigned short)61209;
unsigned char var_4 = (unsigned char)20;
short var_5 = (short)-6052;
long long int var_7 = 239732310986988706LL;
unsigned short var_13 = (unsigned short)25983;
unsigned long long int var_16 = 6599229296997895094ULL;
unsigned long long int var_17 = 10764528045795516106ULL;
long long int var_18 = -1416724381027142513LL;
int zero = 0;
short var_20 = (short)27575;
long long int var_21 = -3784725391689444462LL;
unsigned int var_22 = 743730732U;
signed char var_23 = (signed char)21;
long long int var_24 = 6247223216883874332LL;
unsigned short var_25 = (unsigned short)27019;
_Bool var_26 = (_Bool)0;
short arr_0 [12] ;
long long int arr_1 [12] ;
unsigned long long int arr_2 [12] [12] ;
long long int arr_8 [13] ;
unsigned int arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)23823;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 7735930697579910921LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 7053995833628999453ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = -649492241529554970LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 4283880880U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
