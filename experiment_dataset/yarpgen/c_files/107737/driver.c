#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)132;
short var_4 = (short)-13714;
int var_13 = 1668309560;
unsigned long long int var_16 = 7093321754137510440ULL;
int zero = 0;
unsigned int var_17 = 4281846488U;
unsigned char var_18 = (unsigned char)114;
unsigned short var_19 = (unsigned short)16898;
unsigned char var_20 = (unsigned char)231;
signed char var_21 = (signed char)91;
signed char var_22 = (signed char)113;
short arr_1 [11] ;
signed char arr_2 [11] ;
int arr_3 [11] ;
short arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)-20672;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -19717243;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)31638;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
