#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7864115086162148625LL;
long long int var_2 = -7782665565196778529LL;
long long int var_4 = 5095955264666220071LL;
unsigned char var_6 = (unsigned char)31;
long long int var_7 = -55436593477883475LL;
_Bool var_8 = (_Bool)0;
int var_10 = 1563244394;
unsigned int var_11 = 757980446U;
int var_12 = -1603346706;
unsigned long long int var_14 = 2321622925861031697ULL;
unsigned short var_15 = (unsigned short)28501;
int zero = 0;
int var_16 = -130246624;
signed char var_17 = (signed char)71;
unsigned int var_18 = 2096829753U;
signed char var_19 = (signed char)28;
unsigned char var_20 = (unsigned char)61;
unsigned long long int var_21 = 11702723396690393539ULL;
unsigned char var_22 = (unsigned char)126;
int arr_0 [21] ;
long long int arr_1 [21] [21] ;
long long int arr_2 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 883578735;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 6541664558463262915LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1587961707726650698LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
