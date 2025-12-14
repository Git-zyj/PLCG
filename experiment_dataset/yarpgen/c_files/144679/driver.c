#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6374;
int var_1 = -1736966480;
unsigned long long int var_3 = 2372240970256970459ULL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 10294090523154958216ULL;
short var_11 = (short)-7826;
unsigned long long int var_12 = 6828550805181413043ULL;
int zero = 0;
short var_16 = (short)-6919;
unsigned long long int var_17 = 61610902983199506ULL;
short var_18 = (short)27986;
unsigned int var_19 = 123610688U;
int arr_0 [17] ;
short arr_1 [17] ;
unsigned int arr_2 [17] ;
int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -2113645448;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)-27695;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 4162402893U : 566966860U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1547563966 : -710823359;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
