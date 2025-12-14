#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2110642062;
unsigned long long int var_1 = 9207259404700083394ULL;
unsigned short var_3 = (unsigned short)24534;
signed char var_5 = (signed char)21;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 12879616942540504376ULL;
int zero = 0;
unsigned int var_10 = 1561799840U;
int var_11 = -999888893;
unsigned int var_12 = 98098113U;
int var_13 = -1984848872;
short arr_4 [15] ;
unsigned short arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)25212 : (short)6232;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)31830 : (unsigned short)26167;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
