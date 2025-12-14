#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10500058990695842056ULL;
int var_1 = -1625839573;
unsigned char var_8 = (unsigned char)169;
long long int var_11 = 3786929517577982543LL;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
long long int var_17 = -7722565555092155534LL;
int zero = 0;
unsigned int var_19 = 2852777455U;
unsigned short var_20 = (unsigned short)3524;
int var_21 = 298271255;
long long int arr_0 [14] ;
unsigned long long int arr_1 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -5822826833234029652LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 8808341423876386654ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
