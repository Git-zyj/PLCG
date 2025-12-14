#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)63502;
unsigned long long int var_5 = 7671001374549079855ULL;
short var_8 = (short)803;
unsigned long long int var_10 = 17588300710871771132ULL;
short var_11 = (short)9308;
long long int var_13 = 7555773991728547555LL;
int var_14 = 1594209790;
int var_15 = -354029053;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = 1682149703;
unsigned long long int var_18 = 6694637312538722223ULL;
int var_19 = -1555841698;
unsigned long long int var_20 = 10267863205709401340ULL;
unsigned int var_21 = 361550860U;
short var_22 = (short)-14840;
signed char var_23 = (signed char)-113;
unsigned char var_24 = (unsigned char)98;
int arr_1 [21] [21] ;
int arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = -69158490;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = -897944559;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
