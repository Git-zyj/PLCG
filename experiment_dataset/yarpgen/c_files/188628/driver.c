#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)190;
long long int var_6 = 2179313482647195287LL;
unsigned int var_8 = 2050014044U;
short var_9 = (short)-30232;
int zero = 0;
unsigned long long int var_10 = 13682318880889351223ULL;
unsigned short var_11 = (unsigned short)53867;
unsigned int var_12 = 2776601361U;
unsigned short var_13 = (unsigned short)23154;
unsigned int var_14 = 1213550186U;
unsigned long long int var_15 = 1794888432265807510ULL;
long long int arr_0 [13] [13] ;
signed char arr_1 [13] ;
unsigned char arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = -482716709404601880LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)165;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
