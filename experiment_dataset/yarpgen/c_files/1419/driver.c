#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3965022184U;
unsigned short var_5 = (unsigned short)20019;
unsigned long long int var_6 = 4342490275062078332ULL;
short var_8 = (short)5720;
short var_10 = (short)-4013;
signed char var_11 = (signed char)0;
short var_12 = (short)-30290;
int zero = 0;
short var_13 = (short)29729;
unsigned char var_14 = (unsigned char)166;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)153;
int var_17 = -617389714;
unsigned char arr_2 [15] ;
int arr_3 [15] ;
unsigned short arr_4 [15] ;
long long int arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 1437780848;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)52820;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = -5318360150427353543LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
